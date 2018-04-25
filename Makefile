VERSION = 1
PATCHLEVEL = 0
SUBLEVEL = 1
EXTRAVERSION =
NAME = Unnamed

CC=gcc
CFLAGS=-I.
DEPS = cli.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

hellomake: cli.o 
	gcc -o cli cli.o -I.

