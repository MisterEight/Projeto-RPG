meu_programa: main.o
	gcc main.o -o meu_programa

main.o: main.c
	gcc -c main.c

clean:
	rm -f main.o meu_programa
