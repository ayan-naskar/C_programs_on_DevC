#include<stdio.h>

void calculate(long long int g)
{
	long long int x,x2,y=2,sum=1,z,i,k=g;
	
	while(g/y!=0)
	{
		z=0;
		x=z=g/y;
		//printf("z=%lld",z);
		if(z==1)
		goto here;
		for(i=1;;i++)
		{
			if(z+x+i<=g)
			{
				z+=x+i;
				if(z==g)
				{
					if(k==x-i+1)
						break;
					sum++;
					
					k=x-i+1;
					//printf("x=%lld + i==%lld\n",x,i);
					break;
				}
			}
			if(z+x-i<=g && i!=x)
			{
				z+=x-i;
				if(z==g)
				{
					if(k==x-i)
						break;
					k=x-i;
					sum++;
					//printf("x=%lld - i==%lld\n",x,i);
					break;
				}
			}
			else
				break;
			if(x-i==1)
			{
				here:printf("%lld\n",sum);
				return;
			}
		}
		y++;
	}
	printf("%lld\n",sum);
}

int main()
{
	int t,i;
	long long int g[100];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lld",&g[i]);
	}
	for(i=0;i<t;i++)
	{
		printf("Case #%d: ",i+1);
		calculate(g[i]);
	}
}
