#include<stdio.h>
#include<stdlib.h>

long long int calculate(long long int n)
{
	long long int max,max1,i,j,x,y;//x=find till 2^(n+1)
	int flag=0;
	x=1<<(n+1);	
	for(i=1;i<x;i++)
	{
		y=i;
		max=0;
		for(j=0;y>0;j++)
		{
			if(y&1==1)
			{	
				max+=1<<(2*j);//fourToThePower(j);//printf("%d\t",j);
				if(max==n)
					return max;
				//if(flag==1 && max>max1)
				//	break;
			}
			y=y>>1;
		}
		if(flag==0 && max>=n)
			max1=max+flag++;
		else if(flag==1 && max>=n && max<max1)
			max1=max;
		//printf("\nmax=%lld",max);
		//printf("\ni=%lld x=%lld\n",i,x);
	}
	return max1;
}

int main(void)
{
	long long int t,*n,i,j;
	scanf("%lld",&t);
	n=(long long int*)malloc(t*sizeof(long long int));
	for(i=0;i<t;i++)
	{
		scanf("%lld",n+i);
	}
	for(i=0;i<t;i++)
	{
		printf("%lld\n",calculate(*(n+i)));
	}
}
