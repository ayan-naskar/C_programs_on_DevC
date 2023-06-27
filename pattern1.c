#include<stdio.h>

int main(void)
{
	int n=4,i,j,bin,x,y;//x=find till 2^(n+1)
	x=1<<(n+1);
	
	for(i=1;i<x;i++)
	{
		y=i;
		for(j=0;y>0;j++)
		{
			if(y&1==1)
				printf("%d\t",j);
			y=y>>1;
		}
		printf("\n");
	}
	//printf("%d",n);
}
