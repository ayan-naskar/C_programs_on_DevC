#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdbool.h>
#include<limits.h>
#include<ctype.h>
#include<time.h>

#define si(n) scanf("%d",&n)
#define sf(n) scanf("%f",&n)
#define sd(n) scanf("%lf",&n)
#define sc(n) scanf("%c",&n)
#define su(n) scanf("%u",&n)

#define pi(n) printf("%d\n",n)
#define pf(n) printf("%f\n",n)
#define pd(n) printf("%lf\n",n)
#define pc(n) printf("%c\n",n)
#define pu(n) printf("%u\n",n)

#define PI 3.1415926535897932384626
#define fo(i,n) for(i=0;i<n;i++)

#define prr(p,n) p=(int*)malloc(sizeof(int)*n)
#define srr(p,n) p=(char*)malloc(sizeof(char)*n)
#define ll long long
#define ui unsigned int

int main()
{
	int tt,b,i,a,j,t;
	long n,x,k;
	int *p;
	si(t);
	fo(tt,t){
		scanf("%ld%ld",&x,&k);
		if(x==1){
			puts("YES");
			continue;
		}
		n=b=0;
		while(true){
			if(n<x){
				a=(int)floor((log((double)(x-n))/log((double)k)));
				printf("%ld\n",a);
				if(b==a){
					puts("NO");
					break;
				}
				b=a;
				n+=(long)ceil(round(pow((float)k,floor((float)a))));
				pi(n);
			}
			else if(n==x){
				puts("YES");
				break;
			}
		}
	}
}
//for this input i am getting YES which is correct, but in the website, it is NO....AAAAAAAAAAAAAAAa!!
//193176495 3
