abc.exe:main.o big3.o fact.o pal.o
	gcc -o abc.exe main.o big3.o fact.o pal.c
main.o:main.c
	gcc -c main.c
big3.o:big3.c
	gcc -c big3.c
fact.o:fact.c
	gcc -c fact.c
pal.o:pal.c
	gcc -c pal.c
