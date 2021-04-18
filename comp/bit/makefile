btest.txt: bit
	objdump -d -S bit > bit.txt
	rm -rf test.o
bit: test.o
	echo "good"
	gcc -g -m32  bit.c -o bit

test.o: bit.c
	gcc -c -o test.o bit.c 

