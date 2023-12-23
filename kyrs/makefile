all: prog

prog: kyrs.o temp_functions.o
	gcc -o prog kyrs.o temp_functions.o
kyrs.o: kyrs.c temp_functions.h
	gcc -c -o kyrs.o kyrs.c
temp_functions.o: temp_functions.c 
	gcc -c -o temp_functions.o temp_functions.c

clean: 
	del *.o
	del prog.exe