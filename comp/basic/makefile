btest.txt: test
	objdump -d -S test > test.txt
	rm -rf test.o
test: test.o
	echo "good"
	gcc -g -m32  test.c -o test

test.o: test.c
	gcc -c -o test.o test.c 

