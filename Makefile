main: main.o
		gcc -o main.o main.c
		./main.o

clean:
	rm main.o
