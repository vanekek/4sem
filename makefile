CFLAGS = -fprofile-arcs -ftest-coverage
all: tests
tests: tests.o stack.o
	gcc $(CFLAGS) stack.o tests.o -o tests 
tests.o: tests.c 
	gcc $(CFLAGS) -c tests.c -o tests.o 
stack.o: stack.c
	gcc $(CFLAGS) -c stack.c -o stack.o 
clean: 
	rm -rf tests *.o
