//attempt 2
/*
2
2021
2020
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int isPrime(long long int n)
{
	long int i,j=(long int)sqrt(n);
	//printf("%d ",n);
	//if(n==2)
	//    return 1;
	if(n%2==0)
		return 0;
	for(i=3;i<=j;i+=2)
		if(n%i==0)
			return 0;
	return 1;
}

long long int calculate(long long int z)
{
	long long int mid,x1,x2,x3,i;
	//printf("z=%d",z);
	mid=pow(z,0.5);
	//printf(".%d\n",mid);
	if(mid%2==0)
	    mid--;
	for(i=mid;isPrime(i)==0;i-=2);
	x2=i;
	for(i=mid+2;isPrime(i)==0&&(x2*i<=z);i+=2);
	x1=i;
	//printf("x1=%lld  x2=%lld  mid=%lld\t",x1,x2,mid);
	//printf("executed!");
	printf("\nx1=%lld x2=%lld x1*x2=%lld\n",x1,x2,x1*x2);
	if(x1*x2>z)
	{
		//printf("\nexecuted!!\n");
		for(i=x2-2;isPrime(i)==0;i-=2);
		x3=i;
		printf("\nx3=%lld x2=%lld x3*x2=%lld\n",x3,x2,x3*x2);
		return x2*x3;
	}
	else
		return x1*x2;
}

int main(void)
{
	int i,j,t,d,x;
	FILE *f,*u;
	char p[50],k[100],temp[50];
	long long int z[100],op[100],val;
	//printf("enter t : ");
	f=fopen("ts3_input.txt","r");
	u=fopen("ts3_output.txt","r");
	fscanf(f,"%d",&t);
	//getchar();
	for(i=0;i<t;i++)
	{
		//printf("enter z : ");
		//scanf("%lld",&z[i]);
		fscanf(f,"%s",p);
		z[i]=atoll(p);
		fgets(k,100,u);
		printf("\nfrom file:-->");
		puts(k);
		for(d=0;k[d]!='\0';d++)
		{
			if(k[d]==':'&&k[d+1]==' ')
			{
				x=d+2;
				while(k[x]!='\0')
				{
					temp[x-d-2]=k[x];
					x++;
				}
				temp[x-d-2]='\0';
				op[i]=atoll(temp);
				break;
			}
		}
		//getchar();
		//printf("%lld",z[i]);
		printf("\nfrom file:-->");
		puts(k);
	}
	for(i=0;i<t;i++)
	{
	    if(z[i]>=15)
	    {
	    	printf("z=%lld",z[i]);
	    	val=calculate(z[i]);
			printf("\nCase #%d: %lld\n",i+1,val);
			if(val!=op[i])
			{
				printf("\nError: real output : %lld z=%lld",op[i],z[i]);
				getch();
			}
		}
		else
		printf("\nCase #%d: %lld\n",i+1,6);
	}
	return 0;
}
