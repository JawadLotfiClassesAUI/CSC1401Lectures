# This Makefile can be used to simplify the compilation process
# When run in the same folder, it will execute the following commands one by one
# Each gcc -c <sourcefile.c> performs a partial compilation that results in a .o file
# The final gcc links all the .o files into one executable
all:
	gcc -c mathfunctions.c
	gcc -c mymath.c
	gcc mathfunctions.o mymath.o -o mathfunctions.exe

clean:
	del *.o
	del *.exe