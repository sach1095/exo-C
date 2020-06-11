all : prog
	./prog

prog : pendu.o
	gcc -o prog pendu.o

pendu.o : pendu.c
	gcc -c pendu.c

clean :
	rm -f *.o
	rm prog
