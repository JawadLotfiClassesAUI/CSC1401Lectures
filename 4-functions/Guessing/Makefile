# This Makefile can be used to simplify the compilation process
# When run in the same folder, it will execute the following commands one by one
# Each gcc -c <sourcefile.c> performs a partial compilation that results in a .o file
# The final gcc links all the .o files into one executable
all:
	gcc -c game.c
	gcc -c engine.c
	gcc game.o engine.o -o program.exe

clean:
	del *.o
	del *.exe