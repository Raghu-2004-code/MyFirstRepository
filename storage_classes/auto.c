//it is a default storage class if have'nt mention any storage class it will take it aa auto
#include<stdio.h>
void function(){
	auto int x=10;//auto is optional here
	printf("%d",x);
}
int main(){
	function();
	return 0;
}
