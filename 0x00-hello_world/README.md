**Fuctions of each File"
* 0-preprocessor is a script which runs C file through the preprocessor and saves the result in another file. The C file name will be saved in the variable '$CFILE' and the output is saved in the file 'c'.
* 1-compiler is a script which compiles a C file but does not have a link. The C file name will be saved in the variable '$CFILE'. The output file will be named with a .o extension instead of .c .
* 2-assembler is a script which generates assembly code of a C code and saves it in an output file. The C file name is named in the variable '$CFILE'. the output file should be named with .s extension instead of .c .
* 3-name is a script that compiles a C file and creates an executable names 'cisfun'. The C file name will be saved in the variable '$CFILE'.
* 4-puts.c is a C program that prints exactly '"Programming is like building a multilingual puzzle,' followed by a new line using the function puts. The program ends with a 0 value.
* 5-printf.c is a C program that prints 'with proper grammar, but the outcome is a piece of art,' , followed by a new line using printf function. Program returns 0. Program compiles without warning when using the -Wall gcc option.
* 6-size.c is a C program that prints the size of various types on the computer it is compiled and run on. Program returns 0. Install package libc6-dev-i386 on linux(Vagrant) to test the -m32 gcc option.
* 100-intel is a script that generates the assembly code (Intel syntax) of a C code and saves it in an output file. The C file is named in the variable '$CFILE'. The output should be named the same as the C file but with extension .s instead of .c .

