//time limit exceeded :(

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int isPrime(long long int n)
{
	int i;
	//printf("%d ",n);
	for(i=2;i<n;i++)
		if(n%i==0)
			return 0;
	return 1;
}

long long int calculate(long long int z)
{
	long long int mid,x1,x2,x3,i;
	mid=pow(z,0.5);
	//printf(". %d",mid);
	for(i=mid+1;isPrime(i)==0;i++);
	x1=i;
	for(i=mid;isPrime(i)==0;i--);
	x2=i;
	//printf("executed!");
	if(x1*x2>z)
	{
		for(i=x2-1;isPrime(i)==0;i--);
		x3=i;
		return x2*x3;
	}
	else
		return x1*x2;
}

int main(void)
{
	int i,j,t;
	long long int z[100];
	//printf("enter t : ");
	scanf("%d",&t);
	//getchar();
	for(i=0;i<t;i++)
	{
		//printf("enter z : ");
		scanf("%lld",&z[i]);
		getchar();
		//printf("%lld",z[i]);
	}
	for(i=0;i<t;i++)
	{
		printf("Case #%d: %lld\n",i+1,calculate(z[i]));
	}
	return 0;
}
