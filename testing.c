#include<stdio.h>
//what is happening where ask maam

int main()
{
	int a=1,b=2,c=3;
	int *p;
	p=&b;
	//printf("\n %u	%u	%u",&a,&b,&c);
	printf("\np=%d *p=%u",p,*p);
	printf("\np+1=%d *(p+1)=%u",p+1,*(p+1));
	printf("\np-1=%d *(p-1)=%u",p-1,*(p-1));
	//printf("\nAdress of a:%d",&a);
}
