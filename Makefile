exec = pratham.out
sources = $(wildcard src/*.c)
objects = $(sources:.c=.o)
flags = -g



$(exec): $(objects)
	gcc $(objects) $(flags) -o $(exec)


%.o: %.c include/%.h
	gcc -c $(flags) $< -o $@


install:
	make
	cp ./pratham.out /usr/local/bin/pratham

uninstall:
	-rm /usr/local/bin/pratham

clean:
	-rm *.out
	-rm *.o
	-rm src/*.o