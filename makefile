all: test.o list.o
	gcc -o test test.o list.o

test.o: test.c list.h
	gcc -c test.c

list.o: list.c list.h
	gcc -c list.c

clean:
	rm test.o list.o

run:
	./test
