#include <stdio.h>
void main(){
	int add(int x,int y){
		return x + y;
	}
	int caller(int x,int y){
		int t1 = 125;
		int t2 = 80;
		int sum = add(t1,t2);
		return sum;
   	}
}



