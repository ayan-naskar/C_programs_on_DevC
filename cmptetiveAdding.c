#include<stdio.h>

int main(){
	int a=123,b=12,copyb=b;
	for(;copyb>0;){
		copyb=copyb/10;
		a=a*10;
	}
	a=a+b;
	printf("%d",a);
}

