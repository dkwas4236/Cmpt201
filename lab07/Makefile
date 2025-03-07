#Name: Darion Kwasnitza
#ID: 3122890
#Lab: AS04

CC=gcc
CFLAGS= -Wall -std=c11

main: test_pointerFun.o pointerFun.o
	$(CC) $(CFLAGS) -lm -o app $^ 

test_pointerFun.o: test_pointerFun.c pointerFun.h 
	$(CC) $(CFLAGS) -c $<

pointerFun.o: pointerFun.c pointerFun.h
	$(CC) $(CFLAGS) -c -lm $<

.PHONY: clean

clean:
	rm -f *.o app
