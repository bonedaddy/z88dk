const char z80asm_usage[] = {
   'U',  's',  'a',  'g',  'e',  ':', '\n',
   ' ',  ' ',  'z',  '8',  '0',
   'a',  's',  'm',  ' ',  '[',  'o',  'p',  't',  'i',  'o',  'n',  's',
   ']',  ' ',  '{',  ' ',  '@',  '<',  'l',  'i',  's',  't',  'f',  'i',
   'l',  'e',  '>',  ' ',  '|',  ' ',  '<',  'f',  'i',  'l',  'e',  'n',
   'a',  'm',  'e',  '>',  ' ',  '}', '\n',
  '\n',
   ' ',  ' ',  'T',  'o',
   ' ',  'a',  's',  's',  'e',  'm',  'b',  'l',  'e',  ' ', '\'',  'f',
   'r',  'e',  'd',  '.',  'a',  's',  'm', '\'',  ' ',  'u',  's',  'e',
   ' ', '\'',  'f',  'r',  'e',  'd', '\'',  ' ',  'o',  'r',  ' ', '\'',
   'f',  'r',  'e',  'd',  '.',  'a',  's',  'm', '\'', '\n',
  '\n',
   ' ',
   ' ',  '<',  'l',  'i',  's',  't',  'f',  'i',  'l',  'e',  '>',  ' ',
   'c',  'o',  'n',  't',  'a',  'i',  'n',  's',  ' ',  'l',  'i',  's',
   't',  ' ',  'o',  'f',  ' ',  'f',  'i',  'l',  'e',  ' ',  'n',  'a',
   'm',  'e',  's',  ' ',  'o',  'f',  ' ',  'a',  'l',  'l',  ' ',  'f',
   'i',  'l',  'e',  's',  ' ',  't',  'o',  ' ',  'b',  'e',  ' ',  'a',
   's',  's',  'e',  'm',  'b',  'l',  'e',  'd',  ' ',  'a',  'n',  'd',
   ' ', '\n',
   ' ',  ' ',  'l',  'i',  'n',  'k',  'e',  'd',  ',',  ' ',
   'o',  'n',  'e',  ' ',  'f',  'i',  'l',  'e',  ' ',  'p',  'e',  'r',
   ' ',  'l',  'i',  'n',  'e',  '.', '\n',
  '\n',
   ' ',  ' ',  'F',  'i',
   'l',  'e',  ' ',  't',  'y',  'p',  'e',  's',  ' ',  'r',  'e',  'c',
   'o',  'g',  'n',  'i',  'z',  'e',  'd',  ' ',  'o',  'r',  ' ',  'c',
   'r',  'e',  'a',  't',  'e',  'd',  ' ',  'b',  'y',  ' ',  'z',  '8',
   '0',  'a',  's',  'm',  ':', '\n',
   ' ',  ' ',  ' ',  ' ',  '.',  'a',
   's',  'm',  ' ',  ' ',  ' ',  ' ',  's',  'o',  'u',  'r',  'c',  'e',
   ' ',  'f',  'i',  'l',  'e',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',
   ' ',  ' ',  ' ',  ' ',  ' ',  '|',  '.',  'o',  ' ',  ' ',  ' ',  ' ',
   ' ',  ' ',  'o',  'b',  'j',  'e',  'c',  't',  ' ',  'f',  'i',  'l',
   'e', '\n',
   ' ',  ' ',  ' ',  ' ',  '.',  'l',  'i',  's',  ' ',  ' ',
   ' ',  ' ',  'l',  'i',  's',  't',  ' ',  'f',  'i',  'l',  'e',  ' ',
   ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',
   ' ',  '|',  '.',  'b',  'i',  'n',  ' ',  ' ',  ' ',  ' ',  'Z',  '8',
   '0',  ' ',  'b',  'i',  'n',  'a',  'r',  'y',  ' ',  'f',  'i',  'l',
   'e', '\n',
   ' ',  ' ',  ' ',  ' ',  '.',  's',  'y',  'm',  ' ',  ' ',
   ' ',  ' ',  's',  'y',  'm',  'b',  'o',  'l',  's',  ' ',  'f',  'i',
   'l',  'e',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',
   ' ',  '|',  '.',  'm',  'a',  'p',  ' ',  ' ',  ' ',  ' ',  'm',  'a',
   'p',  ' ',  'f',  'i',  'l',  'e', '\n',
   ' ',  ' ',  ' ',  ' ',  '.',
   'r',  'e',  'l',  'o',  'c',  ' ',  ' ',  'r',  'e',  'l',  'o',  'c',
   ' ',  'f',  'i',  'l',  'e',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',
   ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  '|',  '.',  'd',  'e',  'f',  ' ',
   ' ',  ' ',  ' ',  'g',  'l',  'o',  'b',  'a',  'l',  ' ',  'd',  'e',
   'f',  'i',  'n',  'i',  't',  'i',  'o',  'n',  's',  ' ',  'f',  'i',
   'l',  'e', '\n',
   ' ',  ' ',  ' ',  ' ',  '.',  'e',  'r',  'r',  ' ',
   ' ',  ' ',  ' ',  'e',  'r',  'r',  'o',  'r',  ' ',  'f',  'i',  'l',
   'e', '\n',
  '\n',
   ' ',  ' ',  'T',  'h',  'e',  ' ',  'e',  'n',  'v',
   'i',  'r',  'o',  'n',  'm',  'e',  'n',  't',  ' ',  'v',  'a',  'r',
   'i',  'a',  'b',  'l',  'e',  ' ',  'Z',  '8',  '0',  'A',  'S',  'M',
   ' ',  'c',  'a',  'n',  ' ',  'c',  'o',  'n',  't',  'a',  'i',  'n',
   ' ',  'b',  'l',  'a',  'n',  'k',  '-',  's',  'e',  'p',  'a',  'r',
   'a',  't',  'e',  'd',  ' ',  'o',  'p',  't',  'i',  'o',  'n',  's',
   '.', '\n',
  '\n',
   'H',  'e',  'l',  'p',  ' ',  'O',  'p',  't',  'i',
   'o',  'n',  's',  ':', '\n',
   ' ',  ' ',  '-',  'h',  ',',  ' ',  '-',
   '-',  'h',  'e',  'l',  'p',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',
   ' ',  ' ',  ' ',  ' ',  ' ',  'S',  'h',  'o',  'w',  ' ',  'm',  'a',
   'n',  'u',  'a',  'l',  ',',  ' ',  'p',  'i',  'p',  'e',  ' ',  't',
   'h',  'r',  'o',  'u',  'g',  'h',  ' ', '\'',  'm',  'o',  'r',  'e',
  '\'',  ' ',  't',  'o',  ' ',  'p',  'a',  'g',  'i',  'n',  'a',  't',
   'e', '\n',
   ' ',  ' ',  '-',  'v',  ',',  ' ',  '-',  '-',  'v',  'e',
   'r',  'b',  'o',  's',  'e',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',
   ' ',  ' ',  'B',  'e',  ' ',  'v',  'e',  'r',  'b',  'o',  's',  'e',
  '\n',
  '\n',
   'C',  'o',  'd',  'e',  ' ',  'G',  'e',  'n',  'e',  'r',
   'a',  't',  'i',  'o',  'n',  ' ',  'O',  'p',  't',  'i',  'o',  'n',
   's',  ':', '\n',
   ' ',  ' ',  '-',  'm',  'C',  'P',  'U',  ',',  ' ',
   '-',  '-',  'c',  'p',  'u',  '=',  'C',  'P',  'U',  ' ',  ' ',  ' ',
   ' ',  ' ',  ' ',  'A',  's',  's',  'e',  'm',  'b',  'l',  'e',  ' ',
   'f',  'o',  'r',  ' ',  't',  'h',  'e',  ' ',  'g',  'i',  'v',  'e',
   'n',  ' ',  'C',  'P',  'U',  ':', '\n',
   ' ',  ' ',  ' ',  ' ',  ' ',
   ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',
   ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  'z',
   '8',  '0',  ':',  ' ',  ' ',  ' ',  ' ',  's',  't',  'a',  'n',  'd',
   'a',  'r',  'd',  ' ',  'Z',  '8',  '0',  ' ',  ' ',  ' ',  '|',  'z',
   '1',  '8',  '0',  ':',  ' ',  ' ',  ' ',  'Z',  '1',  '8',  '0', '\n',
 
   ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',
   ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',
   ' ',  ' ',  ' ',  ' ',  'z',  '8',  '0',  'n',  ':',  ' ',  ' ',  ' ',
   'Z',  'X',  ' ',  'N',  'e',  'x',  't',  ' ',  'Z',  '8',  '0',  ' ',
   ' ',  ' ',  ' ',  '|',  'g',  'b',  'z',  '8',  '0',  ':',  ' ',  ' ',
   'G',  'a',  'm',  'e',  'B',  'o',  'y',  ' ',  'Z',  '8',  '0', '\n',
 
   ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',
   ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',
   ' ',  ' ',  ' ',  ' ',  '8',  '0',  '8',  '0',  ':',  ' ',  ' ',  ' ',
   'I',  'n',  't',  'e',  'l',  ' ',  '8',  '0',  '8',  '0',  '(',  '*',
   ')',  ' ',  ' ',  '|',  '8',  '0',  '8',  '5',  ':',  ' ',  ' ',  ' ',
   'I',  'n',  't',  'e',  'l',  ' ',  '8',  '0',  '8',  '5',  '(',  '*',
   ')', '\n',
   ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',
   ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',
   ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  'r',  '2',  'k',  ':',  ' ',  ' ',
   ' ',  ' ',  'R',  'a',  'b',  'b',  'i',  't',  ' ',  '2',  '0',  '0',
   '0',  ' ',  ' ',  ' ',  ' ',  '|',  'r',  '3',  'k',  ':',  ' ',  ' ',
   ' ',  ' ',  'R',  'a',  'b',  'b',  'i',  't',  ' ',  '3',  '0',  '0',
   '0', '\n',
   ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',
   ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',
   ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  't',  'i',  '8',  '3',  ':',  ' ',
   ' ',  ' ',  'T',  'I',  '8',  '3',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',
   ' ',  ' ',  ' ',  ' ',  ' ',  '|',  't',  'i',  '8',  '3',  'p',  'l',
   'u',  's',  ':',  ' ',  'T',  'I',  '8',  '3',  'P',  'l',  'u',  's',
  '\n',
   ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',
   ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',
   ' ',  ' ',  ' ',  ' ',  ' ',  '(',  '*',  ')',  ' ',  'w',  'i',  't',
   'h',  ' ',  'Z',  'i',  'l',  'o',  'g',  ' ',  'o',  'r',  ' ',  'I',
   'n',  't',  'e',  'l',  ' ',  'm',  'n',  'e',  'm',  'o',  'n',  'i',
   'c',  's', '\n',
   ' ',  ' ',  '-',  'I',  'X',  'I',  'Y',  ',',  ' ',
   '-',  '-',  'I',  'X',  'I',  'Y',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',
   ' ',  ' ',  ' ',  'S',  'w',  'a',  'p',  ' ',  'I',  'X',  ' ',  'a',
   'n',  'd',  ' ',  'I',  'Y',  ' ',  'r',  'e',  'g',  'i',  's',  't',
   'e',  'r',  's', '\n',
   ' ',  ' ',  '-',  '-',  'o',  'p',  't',  '=',
   's',  'p',  'e',  'e',  'd',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',
   ' ',  ' ',  ' ',  ' ',  'O',  'p',  't',  'i',  'm',  'i',  'z',  'e',
   ' ',  'f',  'o',  'r',  ' ',  's',  'p',  'e',  'e',  'd', '\n',
   ' ',
   ' ',  '-',  '-',  'd',  'e',  'b',  'u',  'g',  ' ',  ' ',  ' ',  ' ',
   ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  'A',
   'd',  'd',  ' ',  'd',  'e',  'b',  'u',  'g',  ' ',  'i',  'n',  'f',
   'o',  ' ',  't',  'o',  ' ',  'm',  'a',  'p',  ' ',  'f',  'i',  'l',
   'e', '\n',
  '\n',
   'E',  'n',  'v',  'i',  'r',  'o',  'n',  'm',  'e',
   'n',  't',  ':', '\n',
   ' ',  ' ',  '-',  'I',  ',',  ' ',  '-',  '-',
   'i',  'n',  'c',  '-',  'p',  'a',  't',  'h',  '=',  'P',  'A',  'T',
   'H',  ' ',  ' ',  ' ',  'A',  'd',  'd',  ' ',  'd',  'i',  'r',  'e',
   'c',  't',  'o',  'r',  'y',  ' ',  't',  'o',  ' ',  'i',  'n',  'c',
   'l',  'u',  'd',  'e',  ' ',  's',  'e',  'a',  'r',  'c',  'h',  ' ',
   'p',  'a',  't',  'h', '\n',
   ' ',  ' ',  '-',  'L',  ',',  ' ',  '-',
   '-',  'l',  'i',  'b',  '-',  'p',  'a',  't',  'h',  '=',  'P',  'A',
   'T',  'H',  ' ',  ' ',  ' ',  'A',  'd',  'd',  ' ',  'd',  'i',  'r',
   'e',  'c',  't',  'o',  'r',  'y',  ' ',  't',  'o',  ' ',  'l',  'i',
   'b',  'r',  'a',  'r',  'y',  ' ',  's',  'e',  'a',  'r',  'c',  'h',
   ' ',  'p',  'a',  't',  'h', '\n',
   ' ',  ' ',  '-',  'D',  ',',  ' ',
   '-',  '-',  'd',  'e',  'f',  'i',  'n',  'e',  '=',  'S',  'Y',  'M',
   'B',  'O',  'L',  ' ',  ' ',  ' ',  'D',  'e',  'f',  'i',  'n',  'e',
   ' ',  'a',  ' ',  's',  't',  'a',  't',  'i',  'c',  ' ',  's',  'y',
   'm',  'b',  'o',  'l', '\n',
  '\n',
   'L',  'i',  'b',  'r',  'a',  'r',
   'i',  'e',  's',  ':', '\n',
   ' ',  ' ',  '-',  'x',  ',',  ' ',  '-',
   '-',  'm',  'a',  'k',  'e',  '-',  'l',  'i',  'b',  '=',  'F',  'I',
   'L',  'E',  ' ',  ' ',  ' ',  'C',  'r',  'e',  'a',  't',  'e',  ' ',
   'a',  ' ',  'l',  'i',  'b',  'r',  'a',  'r',  'y',  ' ',  'f',  'i',
   'l',  'e',  '.',  'l',  'i',  'b', '\n',
   ' ',  ' ',  '-',  'i',  ',',
   ' ',  '-',  '-',  'u',  's',  'e',  '-',  'l',  'i',  'b',  '=',  'F',
   'I',  'L',  'E',  ' ',  ' ',  ' ',  ' ',  'U',  's',  'e',  ' ',  'l',
   'i',  'b',  'r',  'a',  'r',  'y',  ' ',  'f',  'i',  'l',  'e',  '.',
   'l',  'i',  'b', '\n',
  '\n',
   'B',  'i',  'n',  'a',  'r',  'y',  ' ',
   'O',  'u',  't',  'p',  'u',  't',  ':', '\n',
   ' ',  ' ',  '-',  'O',
   ',',  ' ',  '-',  '-',  'o',  'u',  't',  '-',  'd',  'i',  'r',  '=',
   'D',  'I',  'R',  ' ',  ' ',  ' ',  ' ',  ' ',  'O',  'u',  't',  'p',
   'u',  't',  ' ',  'd',  'i',  'r',  'e',  'c',  't',  'o',  'r',  'y',
  '\n',
   ' ',  ' ',  '-',  'o',  ',',  ' ',  '-',  '-',  'o',  'u',  't',
   'p',  'u',  't',  '=',  'F',  'I',  'L',  'E',  ' ',  ' ',  ' ',  ' ',
   ' ',  'O',  'u',  't',  'p',  'u',  't',  ' ',  'b',  'i',  'n',  'a',
   'r',  'y',  ' ',  'f',  'i',  'l',  'e', '\n',
   ' ',  ' ',  '-',  'b',
   ',',  ' ',  '-',  '-',  'm',  'a',  'k',  'e',  '-',  'b',  'i',  'n',
   ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  'A',  's',  's',  'e',
   'm',  'b',  'l',  'e',  ' ',  'a',  'n',  'd',  ' ',  'l',  'i',  'n',
   'k',  '/',  'r',  'e',  'l',  'o',  'c',  'a',  't',  'e',  ' ',  't',
   'o',  ' ',  'f',  'i',  'l',  'e',  '.',  'b',  'i',  'n', '\n',
   ' ',
   ' ',  '-',  '-',  's',  'p',  'l',  'i',  't',  '-',  'b',  'i',  'n',
   ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  'C',
   'r',  'e',  'a',  't',  'e',  ' ',  'o',  'n',  'e',  ' ',  'b',  'i',
   'n',  'a',  'r',  'y',  ' ',  'f',  'i',  'l',  'e',  ' ',  'p',  'e',
   'r',  ' ',  's',  'e',  'c',  't',  'i',  'o',  'n', '\n',
   ' ',  ' ',
   '-',  'd',  ',',  ' ',  '-',  '-',  'u',  'p',  'd',  'a',  't',  'e',
   ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  'A',  's',
   's',  'e',  'm',  'b',  'l',  'e',  ' ',  'o',  'n',  'l',  'y',  ' ',
   'u',  'p',  'd',  'a',  't',  'e',  'd',  ' ',  'f',  'i',  'l',  'e',
   's', '\n',
   ' ',  ' ',  '-',  'r',  ',',  ' ',  '-',  '-',  'o',  'r',
   'i',  'g',  'i',  'n',  '=',  'A',  'D',  'D',  'R',  ' ',  ' ',  ' ',
   ' ',  ' ',  'R',  'e',  'l',  'o',  'c',  'a',  't',  'e',  ' ',  'b',
   'i',  'n',  'a',  'r',  'y',  ' ',  'f',  'i',  'l',  'e',  ' ',  't',
   'o',  ' ',  'g',  'i',  'v',  'e',  'n',  ' ',  'a',  'd',  'd',  'r',
   'e',  's',  's',  ' ',  '(',  'd',  'e',  'c',  'i',  'm',  'a',  'l',
   ' ',  'o',  'r',  ' ',  'h',  'e',  'x',  ')', '\n',
   ' ',  ' ',  '-',
   'R',  ',',  ' ',  '-',  '-',  'r',  'e',  'l',  'o',  'c',  'a',  't',
   'a',  'b',  'l',  'e',  ' ',  ' ',  ' ',  ' ',  ' ',  'C',  'r',  'e',
   'a',  't',  'e',  ' ',  'r',  'e',  'l',  'o',  'c',  'a',  't',  'a',
   'b',  'l',  'e',  ' ',  'c',  'o',  'd',  'e', '\n',
   ' ',  ' ',  '-',
   '-',  'r',  'e',  'l',  'o',  'c',  '-',  'i',  'n',  'f',  'o',  ' ',
   ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  'G',  'e',  'n',
   'e',  'a',  't',  'e',  ' ',  'b',  'i',  'n',  'a',  'r',  'y',  ' ',
   'f',  'i',  'l',  'e',  ' ',  'r',  'e',  'l',  'o',  'c',  'a',  't',
   'i',  'o',  'n',  ' ',  'i',  'n',  'f',  'o',  'r',  'm',  'a',  't',
   'i',  'o',  'n', '\n',
   ' ',  ' ',  '-',  '-',  'f',  'i',  'l',  'l',
   'e',  'r',  '=',  'B',  'Y',  'T',  'E',  ' ',  ' ',  ' ',  ' ',  ' ',
   ' ',  ' ',  ' ',  ' ',  'D',  'e',  'f',  'a',  'u',  'l',  't',  ' ',
   'v',  'a',  'l',  'u',  'e',  ' ',  't',  'o',  ' ',  'f',  'i',  'l',
   'l',  ' ',  'i',  'n',  ' ',  'D',  'E',  'F',  'S',  ' ',  '(',  'd',
   'e',  'c',  'i',  'm',  'a',  'l',  ' ',  'o',  'r',  ' ',  'h',  'e',
   'x',  ')', '\n',
  '\n',
   'O',  'u',  't',  'p',  'u',  't',  ' ',  'F',
   'i',  'l',  'e',  ' ',  'O',  'p',  't',  'i',  'o',  'n',  's',  ':',
  '\n',
   ' ',  ' ',  '-',  's',  ',',  ' ',  '-',  '-',  's',  'y',  'm',
   't',  'a',  'b',  'l',  'e',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',
   ' ',  'C',  'r',  'e',  'a',  't',  'e',  ' ',  's',  'y',  'm',  'b',
   'o',  'l',  ' ',  't',  'a',  'b',  'l',  'e',  ' ',  'f',  'i',  'l',
   'e',  '.',  's',  'y',  'm', '\n',
   ' ',  ' ',  '-',  'l',  ',',  ' ',
   '-',  '-',  'l',  'i',  's',  't',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',
   ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  'C',  'r',  'e',  'a',  't',  'e',
   ' ',  'l',  'i',  's',  't',  'i',  'n',  'g',  ' ',  'f',  'i',  'l',
   'e',  '.',  'l',  'i',  's', '\n',
   ' ',  ' ',  '-',  'm',  ',',  ' ',
   '-',  '-',  'm',  'a',  'p',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',
   ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  'C',  'r',  'e',  'a',  't',  'e',
   ' ',  'a',  'd',  'd',  'r',  'e',  's',  's',  ' ',  'm',  'a',  'p',
   ' ',  'f',  'i',  'l',  'e',  '.',  'm',  'a',  'p', '\n',
   ' ',  ' ',
   '-',  'g',  ',',  ' ',  '-',  '-',  'g',  'l',  'o',  'b',  'a',  'l',
   'd',  'e',  'f',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  'C',  'r',
   'e',  'a',  't',  'e',  ' ',  'g',  'l',  'o',  'b',  'a',  'l',  ' ',
   'd',  'e',  'f',  'i',  'n',  'i',  't',  'i',  'o',  'n',  ' ',  'f',
   'i',  'l',  'e',  '.',  'd',  'e',  'f', '\n',
  '\n',
   'A',  'p',  'p',
   'm',  'a',  'k',  'e',  ' ',  'O',  'p',  't',  'i',  'o',  'n',  's',
   ':', '\n',
   ' ',  ' ',  '+',  'z',  'x',  '8',  '1',  ' ',  ' ',  ' ',
   ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',
   ' ',  ' ',  'G',  'e',  'n',  'e',  'r',  'a',  't',  'e',  ' ',  'Z',
   'X',  '8',  '1',  ' ',  '.',  'P',  ' ',  'f',  'i',  'l',  'e',  ',',
   ' ',  'o',  'r',  'i',  'g',  'i',  'n',  ' ',  'a',  't',  ' ',  '1',
   '6',  '5',  '1',  '4', '\n',
   ' ',  ' ',  '+',  'z',  'x',  ' ',  ' ',
   ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',
   ' ',  ' ',  ' ',  ' ',  ' ',  'G',  'e',  'n',  'e',  'r',  'a',  't',
   'e',  ' ',  'Z',  'X',  ' ',  'S',  'p',  'e',  'c',  't',  'r',  'u',
   'm',  ' ',  '.',  't',  'a',  'p',  ' ',  'f',  'i',  'l',  'e',  ',',
   ' ',  'o',  'r',  'i',  'g',  'i',  'n',  ' ',  'd',  'e',  'f',  'a',
   'u',  'l',  't',  's',  ' ',  't',  'o', '\n',
   ' ',  ' ',  ' ',  ' ',
   ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',
   ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  '2',  '3',  '7',  '6',
   '0',  ' ',  '(',  'i',  'n',  ' ',  'a',  ' ',  'R',  'E',  'M',  ')',
   ',',  ' ',  'b',  'u',  't',  ' ',  'c',  'a',  'n',  ' ',  'b',  'e',
   ' ',  's',  'e',  't',  ' ',  'w',  'i',  't',  'h',  ' ',  '-',  'r',
   'O',  'R',  'G',  ' ',  '>',  '=',  ' ',  '2',  '4',  '0',  '0',  '0',
  '\n',
   ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',
   ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',  ' ',
   ' ',  'f',  'o',  'r',  ' ',  'a',  'b',  'o',  'v',  'e',  ' ',  'R',
   'A',  'M',  'T',  'O',  'P', '\n'
};
unsigned int z80asm_usage_len = 2682;
