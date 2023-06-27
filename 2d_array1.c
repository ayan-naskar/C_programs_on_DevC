// 2D array with pointer
#include<stdio.h>
int main()
{
	int arr[3][4],i,j;
	int *p;
	int **pt;
	printf("\nEnter Elements:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	p=(int*)arr;
	pt=(int**)arr;
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d[%u]\t",*(p+(i*4+j)),(p+(i*4+j)));
			//printf("%d\t",*(*(arr+i)+j));
		}
		printf("\n");
	}
}
