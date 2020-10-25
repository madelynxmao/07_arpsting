main: strings.o
	cc -o strings strings.o

main.o: strings.c
	cc -c strings.c

.PHONY: clean

clean:
	-rm *.o
