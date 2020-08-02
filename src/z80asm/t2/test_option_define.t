#!/usr/bin/perl

#------------------------------------------------------------------------------
# z80asm tests
# Copyright (C) Paulo Custodio, 2011-2020
# License: The Artistic License 2.0, http://www.perlfoundation.org/artistic_license_2_0
#------------------------------------------------------------------------------

# Test -D, --define

use Modern::Perl;
BEGIN { use lib 't2'; use testlib; }
my $test = test_name();

my $asm = "ld a,_value23";
my @bin = (0x3E, 1);

path("${test}.asm")->spew($asm);

# no -D
run_nok("z80asm ${test}.asm", "", <<END);
Error at file '${test}.asm' line 1: symbol '_value23' not defined
END

# invalid -D
for my $option ('-D23', '-Da-', '-Daaa=', '-D=aaa=', '-Daaa=a', '-Daaa=!', '-Daaa=1x') {
	run_nok("z80asm ${option} ${test}.asm", "", <<END);
Error: illegal option: ${option}
END
}

for my $option ('-D', '-D=', '--define', '--define=') {
	# -D
	asm_ok($asm, "${option}_value23", @bin);
	
	# -Dvar=value
	for my $value (255, "0xff", "0XFF", "0ffh", "0FFH", "\$FF") {
		asm_ok($asm, quote_os("${option}_value23=${value}"), $bin[0], 255);
	}
}

# -D with environment variables
$ENV{TEST_ENV} = 'value';
asm_ok($asm, "-D=_\${TEST_ENV}23", @bin);

$ENV{TEST_ENV} = '255';
asm_ok($asm, "-D=_value23=\${TEST_ENV}", $bin[0], 255);

delete $ENV{TEST_ENV};
asm_ok($asm, "-D=_value\${TEST_ENV}23", @bin);

end_test();


sub quote_os {
	my($txt) = @_;
	if ($^O eq 'MSWin32') {
		return '"'.$txt.'"';
	}
	else {
		return "'".$txt."'";
	}
}
