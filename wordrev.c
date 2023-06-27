#include<stdio.h>
void rev(char*,int,int);
int main(void)//reverse every word of a sentence
{
	char a[60];
	char *p=a;
	int i,j=0;
	printf("Enter the sentence to be reversed: ");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(i==j && a[i]==' ')
		{
			j++;
			continue;
		}
		if(a[i]==' ')
		{
			rev(p,j,i-1);
			j=i+1;
		}
		else if(a[i+1]=='\0')
			rev(p,j,i);
	}
	printf("\nThe new reversed sentence is: ");
	puts(a);
}

void rev(char *p, int j, int i)
{
	int q,avg=(j+i)/2;
	char t;
	for(q=j;q<=avg;q++)
	{
		t=*(p+j);
		*(p+j)=*(p+i);
		*(p+i)=t;
		i--;
		j++;
	}
}
