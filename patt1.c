#include<stdio.h>
#include<stdlib.h>
#include<math.h>

long long int calculate(long int n)
{
	long long int max=0,ma,i,j,x=0,y,c=n,p,sum;//x=find till 2^(n+1)
	int flag=0;
	x=(int)(log10(n)/log10(4));
	//printf("x=%ld",x);
	//for(i=1;i<<(2*x)<n;x++);
	//x++;
	y=x;
	for(;c>0;)
	{
		printf("y=%ld\n",y);
		c=c-(1<<(2*y));
		//printf("\n c=%d",c);
		p=(int)(log10(c)/log10(4));
		if(y-p>1)
		{
			max=p+1;
			ma=y;
		}
		//printf("\nmax=%lld ma=%lld\n",max,ma);
		if(p==y)
		{
			
			if(max==0)
				return 1<<(2*(x+1));
			else
			{
				sum=0;
				//printf("\nmax=%lld ma=%lld\n",max,ma);
				for(i=x;i>=ma;i--)
				{
					
					sum+=(1<<(2*i));
					//printf("\nsum=%lld\n",sum);
				}				
				sum+=(1<<(2*max));
				return sum;
			}
		}
		y=p;
	}
	return n;
}

int main(void)
{
	long int t,*n,i,j;
	scanf("%lld",&t);
	n=(long int*)malloc(t*sizeof(long int));
	for(i=0;i<t;i++)
	{
		scanf("%lld",n+i);
	}
	for(i=0;i<t;i++)
	{
		printf("%lld\n",calculate(*(n+i)));
	}
}
