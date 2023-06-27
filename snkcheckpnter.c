#include<stdio.h>
int main(void)
{
	int a,b;
	int* p=&a,q=&q;
	*p=1;
	*q=2;
	printf("%d %d",p,q);
}
