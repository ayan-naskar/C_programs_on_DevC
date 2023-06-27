#include<stdio.h>
int main(){
	int p[2],i=0,a;
	p[0]=1;
	p[1]=2;
	a=p[++i]+p[i--];
	printf("%d",a);
	return 0;
}
