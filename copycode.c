#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char a,b;
	FILE *f=fopen("CopyFrom.c","r");
	FILE *g=fopen("CopyTo.c","w");
	printf("Searching for the file...");
	if(f==NULL)
	{
		printf("\nError opening the file.\nExecution terminated.");
		exit(0);
	}
	printf("\nFile found, Copying required files...");
	for(a=fgetc(f);a!=EOF;a=fgetc(f))
	{
		if(a=='/')
		{
			b=fgetc(f);
			if(b=='*')
				continue;
			fputc(g,a);
			fputc(g,b);
			continue;
		}
		if(a=='*')
		{
			b=fgetc(f);
			if(b=='/')
				continue;
			fputc(g,a);
			fputc(g,b);
			continue;
		}
		fputc(g,a);
	}
	printf("\nCompleted!");
	fclose(f);
	fclose(g);
}
