#include<stdio.h>
void sum(int x){
	x=10;
}
int main(){
	int x=5;
	sum(x);
	printf("%d",x);
}
