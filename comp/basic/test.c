#include <stdio.h>
void main(){
	/*
	int x = -1;
	unsigned u = 2147483648;
	short si = 32768;
	printf("x = %u = %d\n ", x,x);
	printf("u = %u = %d\n ", u,u);
	printf("si = %u = %d\n ", si,si);
*/

	unsigned int x = 134;
	unsigned int y = 246;
	int m = x;
	int n = y;
	unsigned int z1 = x-y;
	unsigned int z2 = x+y;
	int k1 = m - m;
	int k2 = m + n;
	printf("z1 = %u\n",z1);
	printf("z2=%u\n",z2);
	printf("k1=%d\n",k1);
	printf("k2 = %d\n",k2);
}


