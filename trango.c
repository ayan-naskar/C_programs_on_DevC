//finding the area of triangle and finding if a point lies within it or not
#include<stdio.h>
#include<math.h>
float dist(int*, int*);
float area(int*, int*, int*);
int main()
{
	int py[2];
	int* p = &py[0];
	int points[6];
	int* a, b, c;
	a = &points[0];
	b = &points[2];
	c = &points[4];
	printf("\nEnter the Point X: ");
	scanf("%d,%d", &py[0], &py[1]);
	fflush(stdin);
	printf("\nEnter the values for point A: ");
	scanf("%d,%d", &points[0], &points[1]);
	printf("\nEnter the values for point B: ");
	scanf("%d,%d", &points[2], &points[3]);
	printf("\nEnter the values for point C: ");
	scanf("%d,%d", &points[4], &points[5]);
	//printf("x1=%d y1=%d",x1,y1);
	if (round(area(a, b, p) + area(a, c, p) + area(b, c, p)) == round(area(a, b, c)))
	{
		printf("\n1");
		return 1;
	}
	else
	{
		printf("\n0");
		return 0;
	}
}

float area(int* k, int* l, int* m)
{
	float lenlk , lenlm , lenkm;
	float s,aria;	
	lenlk = dist(k, l);
	lenlm = dist(l, m);
	lenkm = dist(k, m);
	printf("\nlenkm=%f",lenkm);
	s = (lenlk + lenlm + lenkm) / 2;
	aria=pow(s * (s - lenlk) * (s - lenlm) * (s - lenkm), 0.5);
	printf("\narea=%f and some dist lenkm=%f",aria,lenkm);
	return pow(s * (s - lenlk) * (s - lenlm) * (s - lenkm), 0.5);
}
float dist(int* x, int* y)
{
	//printf("\nThe distance between (%d,%d) and (%d,%d) is:%f",*x,*(x+1),*y,*(y+1),pow(pow(*x - *y, 2) + pow(*(x + 1) - *(y + 1),2), 0.5));
	return pow(pow(*x - *y, 2) + pow(*(x + 1) - *(y + 1),2), 0.5);
}
