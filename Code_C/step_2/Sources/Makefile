all : prog
	./prog

prog : main.o
	gcc -o prog main.o

main.o : main.c
	gcc -c main.c

clean :
	rm -f *.o
	rm prog
