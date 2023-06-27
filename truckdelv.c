#include<stdio.h>
#include<stdlib.h>

long int calcGC(long int gc,long int forn)
{
	int i;
	//printf("\ngc=%ld forn=%ld\n",gc,forn);
	for(i=(gc>forn)?forn:gc;i>0;i--)
		if(forn%i==0&&gc%i==0)
			return i;
}

void sortforn(long int *forn, long int n)
{
	long int i,temp;
	for(i=0;i<n-1;i++)
	{
		if(*(forn+i*4)<*(forn+i*4+1))
		{
			temp=*(forn+i*4);
			*(forn+i*4)=*(forn+i*4+1);
			*(forn+i*4+1)=temp;
		}
	}
}

void calculate(long int *forn, long int *forq, long int *gcd, long int n, long int q)
{
	long int i,j, flag=0,gc=0,point;//gc=gcd calculator point=starting point
	for(i=0;i<q;i++)
	{
		point=*(forq+i*2);
		gc=0;
		while(point!=1)
		{
			for(j=0;point!=*(forn+4*j);j++);
			if(*(forn+4*j+2)<=*(forq+i*2+1))
			{
				if(gc==0)
					gc=*(forn+4*j+3);
				else
					gc=calcGC(gc,*(forn+4*j+3));
			}
			point=*(forn+4*j+1);			
		}//need to calculate else to 1//else not needed
		
		//then store in gcd array
		//printf("\n\tgc=%ld",gc);
		*(gcd+i)=gc;
	}
}

int main(void)
{
	int t,i;
	long int n[100],q[100],j,k;
	long int *forn,*forq,*gcd[100];
	//printf("executed");
	scanf("%d",&t);
	getchar();
	//printf("executed");//this line not executing!!
	for(i=0;i<t;i++)
	{
		scanf("%lld %lld",&n[i],&q[i]);
		getchar();
		forn=(long int*)malloc(((n[i]-1)*4)*sizeof(long int));
		forq=(long int*)malloc(q[i]*2*sizeof(long int));
		gcd[i]=(long int*)malloc(q[i]*sizeof(long int));
		for(j=0;j<n[i]-1;j++)
		{
			for(k=0;k<4;k++)
			{
				scanf("%lld",(forn+k+(j*4)));
				//getchar();
			}
			getchar();
		}
		//printf("exycuted");
		sortforn(forn,n[i]);
		for(j=0;j<q[i];j++)
		{
			for(k=0;k<2;k++)
			{
				scanf("%lld",(forq+k+(j*2)));
				getchar();
			}
		}
		calculate(forn,forq,gcd[i],n[i],q[i]);
	}
	for(i=0;i<t;i++)
	{
		printf("Case #%d:",i+1);
		for(j=0;j<q[i];j++)
			printf(" %lld",*(gcd[i]+j));
		printf("\n");
	}
	
	return 0;
}
