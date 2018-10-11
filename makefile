all: test.o list.o
	gcc -o test test.o list.o

list.o: list.c list.h
		gcc -c list.c

test.o: test.c list.h
	gcc -c test.c

clean:
	rm test test.o list.o

run:
	./test
