#include<stdio.h>
int main()
{
	int a[]={1,2,3,4,5},i;
	int *p=a;
	p=(int)malloc(7*sizeof(int));
	a[5]=6;
	a[6]=7;
	for(i=0;i<7;i++)
	printf("%d",a[i]);
}
