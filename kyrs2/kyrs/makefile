all: prog

prog: kyrs.o functions.o
	gcc -o prog kyrs.o functions.o
kyrs.o: kyrs.c functions.h
	gcc -c -o kyrs.o kyrs.c
functions.o: functions.c 
	gcc -c -o functions.o functions.c

clean: 
	del *.o
	del prog.exe