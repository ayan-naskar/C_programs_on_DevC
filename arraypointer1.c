//array pointer
#include<stdio.h>
int main()
{
	int a[]={4,8,6,3,9,7,2,5};
	int *p=a;
	printf("\np=%d",p);
	printf("\n*p=%d",*p);
	printf("\n*p+1=%d",*p+1);
	printf("\n*(p+1)=%d",*(p+1));
	printf("\n*++p=%d",*++p);
	printf("\n*p++=%d",*p++);
	printf("\np=%d",p);
	printf("\n(*p)++=%d",(*p)++);
	printf("\n++(*p)=%d",++(*p));
	printf("\np=%d",p);
}
