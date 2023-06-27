#include<stdio.h>

 int main()
 {
 	int a,f,i;
	a=-1528,f=564,i=123;
 	float b,h;
 	long double g;
	b=23.2654,g=1.855689635e+003,h=5.000000;
	char c='S';	
	long double j=-1.24321e-001;
 	
    printf("%5d\n",a);
    printf("%7.4f\n", b);
	printf("%c\n",c);
	printf("%2c\n",c);
	printf("%3c\n",c);
    printf("%06d\n",f);
    __mingw_printf("%16.9Le\n",g);
    printf("%8.6f\n",h);
    printf("%5d\n",i);
    __mingw_printf("%12.5Le\n",j);   
 }
