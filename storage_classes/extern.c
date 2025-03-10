//The extern storage class is used to declare a variable or function that is defined in another file (or outside the current scope).
#include<stdio.h>
int raghu=10;
void display(){
	printf("before modify=%d",raghu);
}
extern int raghu;
void modify(){
	raghu=21;
	printf("modified=%d",raghu);
}
int main(){
	modify();
	display();
	return 0;
}

