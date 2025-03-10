//The static storage class is used to keep a variable's value persistent between function calls. It also limits the variable’s scope to the block in which it is defined.
#include<stdio.h>
void count(){
	static int x=0;
	x++;
	printf("%d\n",x);
}
int main(){
	count();
	count();
	count();
	count();
	return 0;
}
