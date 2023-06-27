//preprocessor directive #define
#include<stdio.h>
#include<string.h>
#define SQR(x) x*x

int main()
{
	int n=5,p;
	char a[]="hello";
	p=SQR(n)/2;
	printf("\nSquare: %d\n",p);
	//strrev(a);
	puts(a);
}


