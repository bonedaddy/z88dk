// cpp/options.yy.h generated by reflex 2.0.1 from cpp/options.l

#ifndef REFLEX_HEADER_H
#define REFLEX_HEADER_H
#define IN_HEADER 1

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//  OPTIONS USED                                                              //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

#define REFLEX_OPTION_dotall              true
#define REFLEX_OPTION_fast                true
#define REFLEX_OPTION_freespace           true
#define REFLEX_OPTION_header_file         "cpp/options.yy.h"
#define REFLEX_OPTION_lex                 lex
#define REFLEX_OPTION_lexer               OptionsLexer
#define REFLEX_OPTION_noline              true
#define REFLEX_OPTION_outfile             "cpp/options.yy.cpp"

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//  SECTION 1: %top user code                                                 //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////


	// silence warnings from RE-flex
	#ifdef _MSC_VER
	#pragma warning(disable:4102)
	#pragma warning(disable:4800)
	#else
	#ifdef __GNUC__
	//#pragma GCC   diagnostic ignored "-Wignored-qualifiers"
	#else
	#ifdef __clang__
	//#pragma clang diagnostic ignored "-Wignored-qualifiers"
	#endif
	#endif
	#endif

	#include "legacy.h"

	#include "config.h"
	#include "z80asm_manual.h"
	#include "z80asm_usage.h"

	#include <cassert>
	#include <iostream>
	#include <string>
	#include <vector>

	#ifndef Z88DK_VERSION
	#define Z88DK_VERSION "build " __DATE__
	#endif


////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//  REGEX MATCHER                                                             //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

#include <reflex/matcher.h>

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//  ABSTRACT LEXER CLASS                                                      //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

#include <reflex/abslexer.h>

////////////////////////////////////////////////////////////////////////////////
//                                                                            //
//  LEXER CLASS                                                               //
//                                                                            //
////////////////////////////////////////////////////////////////////////////////

class OptionsLexer : public reflex::AbstractLexer<reflex::Matcher> {

	private:
		static const char copyrightmsg[];

		bool verbose;				// true to be verbose
		int cpu;					// TODO: replace with class enum
		bool isTi83Plus;			// true for the TI83Plus
		std::string cpuName;		// used to search libraries
		bool swapIxIy;				// swap IX and IY
		bool optimizeSpeed;			// true to optimize for speed
		bool debugInfo;				// add debug info to map file
		bool mapFile;				// generate map file
		std::string envPendingOpts;	// options from environment to parse by the C code
									// TODO: to remove
		std::vector<std::string> defines;	// list of -D defines

	public:
		bool ParseEnv(const std::string& envVariable = "Z80ASM");	// parse options from environment
		bool ParseArgs(int argc, char* argv[]);						// parse options from ARGV

		bool IsVerbose() const { return verbose; }
		const char* GetEnvPendingOpts() const { return envPendingOpts.c_str(); }
		int GetCpu() const { return cpu; }
		const std::string& GetCpuName() const { return cpuName; }
		bool IsTi83Plus() const { return isTi83Plus; }
		bool SwapIxIy() const { return swapIxIy; }
		bool IsOptimizeSpeed() const { return optimizeSpeed; }
		bool IsDebugInfo() const { return debugInfo; }
		bool DoMapFile() const { return mapFile; }
		auto cbeginDefines() const { return defines.cbegin(); }
		auto cendDefines() const { return defines.cend(); }

	private:
		void ShowManual() const;

 public:
  typedef reflex::AbstractLexer<reflex::Matcher> AbstractBaseLexer;
  OptionsLexer(
      const reflex::Input& input = reflex::Input(),
      std::ostream&        os    = std::cout)
    :
      AbstractBaseLexer(input, os)
  {
  }
  static const int INITIAL = 0;
  virtual int lex();
  int lex(
      const reflex::Input& input,
      std::ostream        *os = NULL)
  {
    in(input);
    if (os)
      out(*os);
    return lex();
  }
};

#endif
