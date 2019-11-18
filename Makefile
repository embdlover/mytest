cc = gcc

CFLAGS = -c -Wall

.PHONY: clean

all: APP 

APP: main.o bubblesort.o ins.o selectionsort.o verify.o
	$(cc) main.o bubblesort.o ins.o selectionsort.o verify.o -o APP

main.o: main.c
	$(cc) $(CFLAGS) main.c

bubblesort.o: bubblesort.c
	$(cc) $(CFLAGS) bubblesort.c

ins.o: ins.c
	$(cc) $(CFLAGS) ins.c

selectionsort.o: selectionsort.c
	$(cc) $(CFLAGS) selectionsort.c

verify.o: verify.c
	$(cc) $(CFLAGS) verify.c

clean:
	rm -rf*o APP

	
