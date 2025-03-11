#include<stdio.h>
struct Person{
	char name[50];
	int age;
	float percent;
};
int main(){
	struct Person m1={"RAGHU",21,90.2};
	printf("name=%s\nage=%d\npercentage=%f\n",m1.name,m1.age,m1.percent);
	return 0;
}
