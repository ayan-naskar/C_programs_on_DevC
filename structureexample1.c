//structure
#include<stdio.h>
struct complex
{
	int real,img;
};

struct complex add(struct complex x,struct complex y)
{
	struct complex c;
	c.real=x.real+y.real;
	c.img=x.img+y.img;
	return c;
}

void show(struct complex x)
{
	char sign=(x.img<0)?'-':'+';
	printf("\n (%d %c %di)",x.real,sign,((x.img<0)?((-1)*x.img):x.img));
}

int main()
{
	struct complex a,b,c;
	printf("\nEnter First complex number: ");
	printf("real : ");
	scanf("%d",&a.real);
	printf("imaginary : ");
	scanf("%d",&a.img);
	printf("\nEnter Second complex number: ");
	printf("real : ");
	scanf("%d",&b.real);
	printf("imaginary : ");
	scanf("%d",&b.img);
	printf("\nGiven numbers: ");
	show(a);
	show(b);
	c=add(a,b);
	printf("\nAfter Adding numbers: ");
	show(c);
}
