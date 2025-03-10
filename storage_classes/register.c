//The register storage class suggests to the compiler that the variable should be stored in a CPU register for faster access (rather than in memory).
#include<stdio.h>
int main(){
	register int i;
	for(i=0;i<5;i++){
		printf("%d\n",i);
	}
	return 0;
}
