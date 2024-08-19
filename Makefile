
all: app run clean

app: main.c
	gcc -o app main.c render.c algorithms.c

run: app
	./app

clean:
	rm app