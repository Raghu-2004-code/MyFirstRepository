#include<stdio.h>
#include<string.h>
struct Data{
	char name[50];
	int age;
	float percent;
};
int main(){
	struct Data raghu;
	strcpy(raghu.name,"Raghu");
	raghu.age=21;
	raghu.percent=90.2;
	printf("name=%s\nage=%d\npercent=%f\n",raghu.name,raghu.age,raghu.percent);
	return 0;
}
