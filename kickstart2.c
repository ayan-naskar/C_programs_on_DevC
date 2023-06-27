#include<stdio.h>//had the problem of /n to fix that, i had written getchar();  the following didnt work fflush(stdin); 

void compute(int n,char *p,int t)
{
    int i,calc=1;
    printf("Case #%d: %d",t,1);
    for(i=1;i<n;i++)
    {
        if(*(p+i)>*(p+i-1))
            ++calc;
        else if(*(p+i)<=*(p+i-1))
            calc=1;
        printf(" %d",calc);
    }
    printf("\n");
}

int main()
{
	char *n[100];
	int s[100],t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&s[i]);
		fflush(stdin);
		n[i]=(char*)malloc((s[i]+1)*sizeof(char));
		gets(n[i]);
	}
	for(i=0;i<t;i++)
	{
		compute(s[i],n[i],i+1);
	}
}
