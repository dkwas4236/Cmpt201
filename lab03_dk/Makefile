# Name: Darion Kwasnitza
# ID: 3122890
# Lab: AS04

CC=gcc
CFLAGS= -Wall -std=c11

main: userInfo.o
	$(CC) $(CFLAGS) -o usrinfo $^

userInfo.o: userInfo.c
	$(CC) $(CFLAGS) -c $<

%.o: %.c 
	$(CC) $(CFLAGS) -c $<

.PHONY: clean

clean:
	rm -f *.o usrinfo

