compile:
	gcc -o target/debug/semc cli.c
lint:
	gcc -v -Wall *.c
