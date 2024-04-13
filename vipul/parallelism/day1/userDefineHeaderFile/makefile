#this line is command line 

#syntax is
#target: dependencies /pre-requisites
#<tab> command to execute from dependencies to target

myout: two.o three.o
	gcc -o myout two.o three.o

tow.o: two.c
	gcc -I. -c two.c

three.o: three.c
	gcc -I. -c three.c

clean:
	rm *.o myout
