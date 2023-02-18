all:
	gcc main.c init.c search.c diagonal.c complete.c result.c -o main.o
Clean:
	rm main.o