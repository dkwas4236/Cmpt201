# Name: Darion Kwasnitza
# ID: 3122890
# Lab: AS04

CC = gcc
CFLAGS = -Wall -std=c11

main: stringExtra.o test_extra.o
	$(CC) $(CFLAGS) -o app $^

%.o: %.c
	$(CC) $(CFLAGS) -c $<

.PHONY: clean

clean:
	rm -f *.o app

