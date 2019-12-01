CC=gcc
CFLAGS=-I.
AR=ar
FLAGS= -Wall -g
DEPS = myBank.h
OBJECTS_MAIN=main.o
OBJECTS_LIB= myBank.o

all: run

run:$(OBJECTS_MAIN) libmyBank.a
	$(CC) $(FLAGS) -o run $(OBJECTS_MAIN) libmyBank.a

libmyBank.a: $(OBJECTS_LIB) 
	$(AR) -rcs libmyBank.a $(OBJECTS_LIB)

%.o: %.c $(DEPS)
	$(CC) -fPIC $(FLAG) -c -o $@ $< $(CFLAGS)

.PHONY:clean all

clean:
	rm -f *.o *.a *.gch *.so exe run
