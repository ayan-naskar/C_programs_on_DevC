#include <stdio.h>

void sqeeze(char* s, char c)
{
	int i=0,j=0;
	for(;*(s+i+j)!='\0';i++)
	{
		gooo:if(*(s+i+j)==c)
		{
			j++;
			goto gooo;
		}
		*(s+i)=*(s+i+j);
	}
	*(s+i)='\0';
}

int main(void)
{
	char s[40],c;
	char* p;
	p=s;
	printf("Enter the string :");
	gets(p);
	printf("\nEnter the character c :");
	scanf("%c",&c);
	sqeeze(p,c);
	printf("The new string is :");
	puts(s);
	return 0;
}
