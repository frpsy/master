CC=gcc
AR=ar
CFLAGS=-Wall -Wextra -pedantic -std=c99

all: main

libmylib.a: mylib.o
	$(AR) rcs $@ $^

mylib.o: mylib.c mylib.h
	$(CC) $(CFLAGS) -c mylib.c

main.o: main.c mylib.h
	$(CC) $(CFLAGS) -c main.c

main: main.o libmylib.a
	$(CC) main.o -L. -lmylib -o $@

clean:
	rm -f *.o libmylib.a main
