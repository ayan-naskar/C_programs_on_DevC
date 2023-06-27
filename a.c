// dynamic memory allocation pointers
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;
	int n,i;
	printf("\nEnter size:");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	printf("\nEnter values:");
	for(i=0;i<n;i++)
	{
		scanf("%d",(p+i));
	} 
	for(i=0;i<n;i++)
	{
		printf("\n%d",p[i]);
	}
}

