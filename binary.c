#include<stdio.h>
int main(void)
{
	int n,i,j;
	int bin;
	scanf("%d",&n);
	for(i=1;n!=0;i++)
	{
		if(n&1==1)
			printf("1");
		else
			printf("0");
		n=n>>1;
	}
}
