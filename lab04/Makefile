# Name: Darion Kwasnitza
# ID: 3122890
# Lab: AS04

CC= gcc
CFLAGS= -Wall -std=c11

main: calc.o
	$(CC) $(CFLAGS) -o calc $^

calc.o: calc.c 
	$(CC) $(CFLAGS) -c $<

.PHONY: clean

clean:
	rm -f *.o calc

