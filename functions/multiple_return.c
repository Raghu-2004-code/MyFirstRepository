#include<stdio.h>
void array(int ar[2]){
	ar[0]=10;
	ar[1]=20;
}
int main(){
	int values[2];
	array(values);
	printf("%d , %d",values[0],values[1]);
	return 0;
}
