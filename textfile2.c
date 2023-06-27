//text file
#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *f;
	int i;
	char s[50];
	char p;
	f=fopen("test.txt","r");
	if(f==NULL)
	{
		printf("\nError opening file!!");
		exit(0);
	}
	while((fgets(s,50,f))!=NULL)
	{
		printf("->");
		for(i=0;s[i]!='\0';printf("%c",s[i]),i++);
		//puts(s);
	}
	
	/*while(1)
	{
		p=fgetc(f);
		if(p==EOF)
			break;
		printf("%c",p);
	}*/
	printf("\nComplete!");
	fclose(f);
}
