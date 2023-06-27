#include<stdio.h>
#include<stdlib.h>
#define A 100

void sort(long long int n,long long int *ar)
{
	long long int i,j,tem;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(*(ar+j)<*(ar+j+1))
			{
				tem=*(ar+j);
				*(ar+j)=*(ar+j+1);
				*(ar+j+1)=tem;
			}
		}
	}
	/*for(i=0;i<n;i++)
		printf("%lld\t",ar[i]);
	printf("\n");*/
}

long long int calculate(long long int n,long long int p,long long int* ar)
{
	long long int sum=*ar,sum2,i,j;
	for(i=0;i<n-p+1;i++)
	{	
		sum2=0;
		for(j=i;j<=i+p-1;j++)
		{
			sum2+=*(ar+j);
		}
		printf("\nsum2=%ld\n",sum2);
		if(sum>((p* *(ar+i))-sum2))
			sum=((p* *(ar+i))-sum2);
	}
	return sum;
}

int main()
{
	long long int t,n[A],p[A],i,j;
	long long int* ar[A];
	scanf("%lld",&t);
	for(i=0;i<t;i++)
	{
		scanf("%lld %lld",&n[i],&p[i]);
		ar[i]=(long long int*)malloc(n[i]*sizeof(long long int));
		for(j=0;j<n[i];j++)
		{
			scanf("%lld",ar[i]+j);
		}
	}
	for(i=0;i<t;i++)
	{
		sort(n[i],ar[i]);
		printf("Case #%lld: %lld\n",i+1,calculate(n[i],p[i],ar[i]));
	}
}
