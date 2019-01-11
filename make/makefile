all : a execute

a : complexe.o main.o
	gcc -Wall main.o complexe.o -o a -lm

complexe.o : complexe.c complexe.h
	gcc -Wall -c complexe.c -lm

main.o : complexe.h main.c
	gcc -Wall -c main.c -lm

execute : a
	./a
