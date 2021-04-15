gdbtest.txt: gdbtest
	objdump -d -S gdbtest > gdbtest.txt
	rm -rf test.o
gdbtest: test.o
	echo "good"
	gcc -g -o gdbtest gdbtest.c

test.o: gdbtest.c
	gcc -c -o test.o gdbtest.c 

