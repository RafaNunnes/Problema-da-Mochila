main:	main.o	mochila.o
	gcc main.o mochila.o -o main
	./main < mochila01.txt.txt > saida.out


main.o:	main.c
	gcc -c main.c

mochila.o:	mochila.c	mochila.h
	gcc -c mochila.c

m01:
	./main < mochila01.txt.txt > saida.out

m02:
	./main < mochila02.txt.txt > saida.out

m1000:
	./main < mochila1000.txt > saida.out

m2500:
	./main < mochila2500.txt > saida.out

m5000:
	./main < mochila5000.txt > saida.out

clean:
	rm *.o *.out