//functions
#include<stdio.h>
void change(char[]);
int main()
{
	char c[50];
	printf("\nEnter Sentence: ");
	gets(c);
	change(c);
	printf("\nAfter change: ");
	puts(c);
}
void change(char ch[])
{
	int i=0;
	for(;ch[i]!='\0';i++)
	{
		if(i==0||ch[i-1]==' ')
		{
			ch[i]-=32;
		}
	}
}
