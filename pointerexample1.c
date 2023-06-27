//pointer
//pointer is a variable which stores address of another variable
#include<stdio.h>
int main()
{
	int a=512;
	char p='K';
	float f=2.56;
	int s=-7;
	int *x; //int* g,c,d;
	char *y;
	float *z;
	printf("\na=%d address of a=%d[%u](%x)",a,&a,&a,&a);
	printf("\np=%c address of p=%d[%u](%x)",p,&p,&p,&p);
	printf("\nf=%f address of f=%d[%u](%x)",f,&f,&f,&f);
	printf("\ns=%d s=%u address of s=%x",s,s,&s);
	x=&a;
	y=&p;
	z=&f;
	printf("\n x=%x y=%x z=%x ",x,y,z);
	printf("\nvalue of the address stored in x=%d",*x);
	printf("\nvalue of the address stored in y=%c",*y);
	printf("\nvalue of the address stored in z=%f",*z);
	y=&a;
	printf("\ny=%x value of the address stored in y=%d",y,*y);
}
