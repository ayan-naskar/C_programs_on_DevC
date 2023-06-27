#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i;
	FILE *F,*H;
	char a;
	printf("\nTotal number of arguments: %d",argc);
	H=fopen("ResultText.txt","w");
	//printf("\nThe arguments: ");
	for(i=1;i<argc;i++)
	{
		//puts(argv[i]);
		F=fopen(argv[i],"r");
		if(F==NULL)
		{
			printf("One of the Files doesnt Exist!!");
			puts(argv[i]);
			exit(0);
		}
		for(a=fgetc(F);a!=EOF;fputc(a,H),a=fgetc(F));
		fputc('\n',H);
		fclose(F);
	}
	fclose(H);
	printf("\nDone!");
}
