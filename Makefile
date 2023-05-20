s21_grep: file.o main.o
	gcc file.o main.o -o s21_grep
	rm *.o 

file.o: file.c
	gcc -c file.c

main.o: main.c
	gcc -c main.c