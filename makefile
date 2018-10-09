all: list.o
	gcc -o list list.o

list.o: list.c
	gcc -c list.c

clean:
	rm list.o

run:
	./list
