#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char *argv[])
{
	int i;
	FILE *f,*h;
	char *p,a;
	//printf("Number of files = %d",argc-1);
	if(1==argc)
	{
		printf("File name Required");
		exit(0);
	}
	f=fopen(argv[1],"r");
	p=(char*)malloc((9+strlen(argv[1]))*sizeof(char));
	strcpy(p,"Copy of ");
	strcat(p,argv[1]);
	h=fopen(p,"w");
	for(a=fgetc(f);a!=EOF;fputc(a,h),a=fgetc(f));
	printf("Done!");
	fclose(f);
	fclose(h);
}