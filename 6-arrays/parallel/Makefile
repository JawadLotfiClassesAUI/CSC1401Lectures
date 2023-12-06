program := students
library := arrayfunctions
all:
	gcc -c $(program).c
	gcc -c $(library).c
	gcc $(program).o $(library).o -o $(program).exe

clean:
	del *.o
	del *.exe

run:
	$(program).exe