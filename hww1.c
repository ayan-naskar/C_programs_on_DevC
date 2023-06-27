#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,i,j,n,m;
	printf("Enter the values of m and n: ");
	scanf("%d %d",&m,&n);
	p=(int*)malloc((m*n)*sizeof(int));
	printf("Enter the elements : ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",(p+j+n*i));
		}
		//printf("\n");
	}
	printf("The elements are:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",*(p+j+n*i));
		}
		printf("\n");
	}
}
