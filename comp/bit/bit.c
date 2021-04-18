#include<stdio.h>
#include<stdint.h>
int main(uint8_t s){
	int n=0;
	s = 0xff;
	s = (s & 0x55)|((s>>1) & 0x55);
	printf("s的值为:%d\n",s);
	s = (s & 0x3) | ((s>>1) & 0x3);
	printf("s的值为:%d\n",s);
	return n;
}
