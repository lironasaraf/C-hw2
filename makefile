
CC = gcc
AR = ar
FLAGS= -Wall -g
all: progmain mains libmyBank.a


mains: main.o libmyBank.a
	$(CC) $(FLAGS) -o mains main.o libmyBank.a

progmain: main.o myBank.o
	$(CC) $(FLAGS) -o progmain main.o myBank.o

libmyBank.so: myBank.o
	$(CC) -shared -o libmyBank.so myBank.o

libmyBank.a: myBank.o
	$(AR) -rcs libmyBank.a myBank.o

main.o: main.c myBank.h
	$(CC) $(FLAGS) -c main.c
myBank.o: myBank.c myBank.h
	$(CC) $(FLAGS) -c myBank.c

.PHONY: Clean

clean:
	rm -f *.o progmain mains maind *.a
