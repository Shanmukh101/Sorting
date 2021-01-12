input1=98 97 67 54 76 83 28
all:main

main:main.o insertion.o bubble.o selection.o quick.o merge.o
	gcc main.o insertion.o bubble.o selection.o quick.o  merge.o -o main

main.o:main.c
	gcc -c main.c

insert.o:insertion.c
	gcc -c insertion.c -o insert.o

bubble.o:bubble.c
	gcc -c bubble.c -o bubble.o

selection.o:selection.c
	
	gcc -c selection.c -o selection.o

quick.o:quick.c
	gcc -c quick.c -o quick.o

merge.o:
	gcc -c merge.c -o merge.o

rm:
	rm -rf *.o 
run:
	./main $(input1)

