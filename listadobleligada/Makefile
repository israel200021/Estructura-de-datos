
a.out: main.o listadobleligada.o
	gcc main.o listadobleligada.o
main.o: main.c
	gcc -c main.c
listadobleligada.o: listadobleligada.c
	gcc -c listadobleligada.c
run: a.out
	./a.out
clear:
rm a.out main.o listadobleligada.o

