
a.out: main.o lista.o
	gcc main.o lista.o
main.o: main.c
	gcc -c main.c
lista.o: lista.c
	gcc -c lista.c
run: a.out
	./a.out
clear:
	rm a.out main.o lista.o

