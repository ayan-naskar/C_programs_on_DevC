#include <stdio.h>

int main(int argc, char *argv[])
{
	int i;
	printf("\nTotal number of arguments: %d",argc);
	printf("\nThe arguments: ");
	for(i=0;i<argc;i++)
	{
		puts(argv[i]);
	}
}
