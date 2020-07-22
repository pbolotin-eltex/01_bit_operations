# Make C-Array-phonebook

.PHONY = clean all
CC := gcc

all: bitmove bitmove_min

bitmove : bitmove.o

bitmove.o : bitmove.c

bitmove_min : bitmove_min.o

bitmove_min.o : bitmove_min.c

clean :
	rm -f *.o bitmove bitmove_min
