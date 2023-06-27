//dynamic allocation
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p;
	int i;
	//p=malloc(12);
	p=calloc(4,sizeof(int));
	for(i=0;i<4;i++)
	{
		//*(p+i)=(char)(65+i);
		printf("\n%u ",(p+i));
	}
}
