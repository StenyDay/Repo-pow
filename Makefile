labi: pow.o functions.o
	gcc -o labi pow.o functions.o -lm

test: test.o powtest.o functions.o
	gcc -o test test.o powtest.o functions.o -lm
	./test

pow.o: pow.c library.h 
	gcc -c pow.c


test.o: test.c library.h 
	gcc -c test.c


functions.o: functions.c library.h
	gcc -c functions.c


powtest.o: powtest.c
	gcc -c powtest.c
	
clean:
	rm *.o
