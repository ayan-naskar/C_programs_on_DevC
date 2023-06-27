#include<stdio.h>
#include<stdlib.h>

void compute(int n,char *p,int t)
{
    int ar[n],i,calc=1;
    ar[0]=1;
    printf("Case #%d: %d",t,1);
    for(i=1;i<n;i++)
    {
        if(*(p+i)>*(p+i-1))
            ar[i]=++calc;
        else if(*(p+i)<=*(p+i-1))
            ar[i]=calc=1;
        printf(" %d",ar[i]);
    }
    printf("\n");
}

int main(void)
{
    int t,*n,i=0,j,tot=0;
    char *s,*ss;
    scanf("%d",&t);
    n=(int *)malloc(t*sizeof(int));
    for(;i<t;i++)
    {
        scanf("%d",&n[i]);
        fflush(stdin);
        //printf("%d",n[i]);
        tot+=n[i];
        s=(char *)malloc(tot*sizeof(char));
        ss=(char *)malloc((n[i]+1)*sizeof(char));
        gets(ss);
        fflush(stdin);
        //puts(ss);
        for(j=tot-n[i];j<tot;j++)
        	s[j]=ss[j-tot+n[i]];
    }
    puts(s);
    tot=0;
    for(i=0;i<t;i++)
    {
        compute(n[i],&(s[tot]),i+1);
        tot+=n[i];
    }
    return 0;
}
