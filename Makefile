all : src bin

src : temperatures.c Fahr2C.h Fahr2C.c C2Fahr.c C2Fahr.h
	gcc -c temperatures.c Fahr2C.c C2Fahr.c

bin : temperatures.o Fahr2C.o C2Fahr.o
	gcc -o temps temperatures.o Fahr2C.o C2Fahr.o

distrib : Makefile temps temperatures.c Fahr2C.c Fahr2C.h C2Fahr.c C2Fahr.h

	tar cf temps.src.tar Makefile temps temperatures.c Fahr2C.c Fahr2C.h C2Fahr.c C2Fahr.h

clean  :
	rm *.o temps

install : temps
	install -m 555 temps /usr/local/bin

xyzzy : 
	echo Nothing Happens.

