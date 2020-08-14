PROJECT_NAME=makefile.out
outfile: main.o prime.o
	cc main.o prime.o -o outfile
main.o:main.c
	cc -c main.c
prime.o:prime.c
	cc -c prime.c
doc:
	make -C documentation
clean:
	rm -rf $(PROJECT_NAME) documentation/html
