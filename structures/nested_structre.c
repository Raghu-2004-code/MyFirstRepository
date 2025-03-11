#include<stdio.h>
#include<string.h>
struct DOB{
	int day;
	int month;
	int year;
};
struct Details{
	char name[50];
	struct DOB birth;
};
int main(){
	struct Details raghu;
	strcpy(raghu.name,"Raghavendra");
	raghu.birth.day=20;
	raghu.birth.month=8;
	raghu.birth.year=2004;
	printf("name=%s\nDOB=%d/%d/%d",raghu.name,raghu.birth.day,raghu.birth.month,raghu.birth.year);
	return 0;
}
