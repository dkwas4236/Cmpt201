#Name: Darion
#ID: 3122890
#lab: AS04

CC=gcc
CFLAGS= -Wall -std=c11

main: arrayFun.o test_arrayFun.o
	$(CC) $(CFLAGS) -o app $^

arrayFun.o: arrayFun.c arrayFun.h 
	$(CC) $(CFLAGS) -c $<

test_arrayFun.o: test_arrayFun.c
	$(CC) $(CFLAGS) -c $<

.PHONY: clean

clean:
	rm -f *.o app

