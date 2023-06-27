//pointer
#include<stdio.h>

int main()
{
	int a,b,c,*p;
	a=45;
	b=-12;
	c=185;
	p=&a;
	printf("\na=%d address of a=%u",*p,p);
	printf("\nb=%d address of b=%u",b,&b);
	printf("\nc=%d address of c=%u",c,&c);
	printf("\n*p=%d p=%u",*p,p);
	p=p-1;
	printf("\n*p=%d p=%u",*p,p);
	p=p-1;
	printf("\n*p=%d p=%u",*p,p);
	p=p+1;
	printf("\n*p=%d p=%u",*p,p);
	p++;
	printf("\n*p=%d p=%u",*p,p);
	//	++p;
	//printf("\n*p=%d p=%u",*p,p);
	//printf("\nsize of pointer variable= %d",sizeof(char*));
	printf("\na=%d ",a);
	*p=8;
	printf("\na=%d ",a);
}
