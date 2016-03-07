# I am a comment, and I want to say that the variable CC will be
# the compiler to use.
CC=gcc
# Hey!, I am comment number 2. I want to say that CFLAGS will be the
# options I'll pass to the compiler.
CFLAGS=-c -O3 -mtune=native -Wall -lm -g

all: primo

primo: main.o calc_primo.o calc_primo_opt.o
	$(CC) -pg -g -fopenmp main.o calc_primo.o calc_primo_opt.o -o primo -lm

main.o: main.c
	$(CC) $(CFLAGS) main.c

calc_primo.o: calc_primo.c
	$(CC) $(CFLAGS) calc_primo.c
	
calc_primo_opt.o: calc_primo_opt.c
	$(CC) $(CFLAGS) calc_primo_opt.c

clean:
	rm *o