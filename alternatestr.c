#include<stdio.h>
// maam, can i write c=alternate(a,b); c is a array
//not working with pointer ,what to do?
//c array contains the necessity, but cant return pointer properly

void alternate(char a[], char b[],char* p)
{
	int flag1=0,flag2=0,i=0,c1=0,c2=0;
	for(;flag1==0||flag2==0;)
	{
		if(a[c1]!='\0')
			p[i++]=a[c1++];
		if(b[c2]!='\0')
			p[i++]=b[c2++];
		if(a[c1]=='\0')
			flag1=1;
		if(b[c2]=='\0')
			flag2=1;
	}
	p[i]='\0';
	//printf("\n%c",p[2]);
	//puts(p);
}

int main(void)
{
	char a[20], b[20], c[40];
	int i=0;
	char *p=c;
	printf("\nEnter the string 1 :");
	gets(a);
	printf("\nEnter the string 2 :");
	gets(b);
	alternate(a,b,p);
	for(;*(p+i)!='\0';i++)
		printf("%c",*(p+i));
}
