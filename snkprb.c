#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int isPrime(int,int);
void main()
{
    int n1,*a,i,p,j,m,n,q,k;
    scanf("%d",&n1);
    a=(int*)malloc(n1*sizeof(int*));
    for(i=0;i<n1;i++)
    {
        scanf("%d",(a+i));
    }
    for(i=0;i<n1;i++)
    {
        p=*(a+i);
        for(j=2;j<p/2;j++)
        {
            m=isPrime(2,j);
            if(m==1)
            {
                for(k=j+1;;k++)
                {
                    n=isPrime(2,k);
                    if(n==1)
                        break;
                }
                if(n==0)
                    continue;
                if(j*k>p)
                    break;
                q=j*k;
            }  
        }
        printf("Case #%d: %d\n",(i+1),q);
    }
}
int isPrime(int f,int x)
{
    if(f>(int)sqrt(x))
        return 1;
    if(x%f==0)
        return 0;

    return isPrime(f+1,x);
}
