//number in a string and convert it into a number
#include<stdio.h>

int main(){
	char num1[20];
	int i=0,num=0,fg=0;
	printf("\nEnter the number:");
	gets(num1);
	if(num1[0]=='-'){
		i++;
		fg=1;
	}
	for(;num1[i]!='\0';i++){
		num=num*10+((int)num1[i]-(int)'0');
	}
	if(fg==1){
		num=-num;
	}
	printf("\nThe ouput is:%d",num);
}
