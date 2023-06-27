#include<stdio.h>
int main ()
{
	int a,b,c,d,f,g,i,l;
	float e,h,k;
	printf ("\nenter a no = ");
	scanf  ("%d",& a);
	printf ("\nenter a no= ");
	scanf ("%d",& b);
	c=(a/b);
	printf ("\ninteger arithmetic division =  %d ",c);
	d=(a%b);
	printf ("\ninteger arithmetic modulo division =  %d ",d);
	printf ("\nenter a no =  ");
	scanf ("%f",&e);
	printf ("\nenter a no = ");
	scanf ("%d",&f);
	g =(e/f);
	printf ("\nreal arithmetic division =  %d  ",g);
	h=(a/e);
	printf ("\nmixed mode arithmetic division =  %f ",h);
	i=a++ + b;
	printf ("\nincrement = %d  ",i);
	printf ("\nsize of variable a = %d ",sizeof(a));
	k= (float) (a/b);
	printf ("\ntype casting =%f",k);
	l=(a+b)*c/d;
	printf ("\nvalue of (a+b)*c/d is =  %d\n",l);


	return 0;
}
