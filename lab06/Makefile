#Name: Darion Kwasnitza
#ID: 3122890
#Lab: AS04

CC=gcc
CFLAGS= -Wall -std=c11

main: extraFun.o test_extraFun.o
	$(CC) $(CFLAGS) -lm -o app $^

extraFun.o: extraFun.c extraFun.h
	$(CC) $(CFLAGS) -c -lm $<

test_extraFun.o: test_extraFun.c extraFun.h
	$(CC) $(CFLAGS) -c $<

.PHONY: clean

clean:
	rm -f *.o app

