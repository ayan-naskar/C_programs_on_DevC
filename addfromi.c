#include<stdio.h>
//pointer not clear, thisb program done in vs comm. it ssaays corrupted values. yet runs

int main(void)
{
	char aa[20];
	char a[20],b[20];
	int i,k=0,j;
	char *p=&aa[0];//p=aa;
	printf("\nEnter the string 1:");
	gets(a);
	printf("\nEnter the string 2:");
	gets(b);
	printf("\nEnter the value of i :");
	scanf("%d",&i);
	i--;
	for(j=0;b[k]!='\0';j++)
	{
		if(j<=i)
		{
			*(p+j)=a[j];
			//printf("^%c",a[j]);
		}
		else
		{
			*(p+j)=b[k++];
			//printf("^%c",b[k-1]);
		}
	}
	*(p+j)=b[k];
	printf("\nThe new string is :");
	for(j=0;*(p+j)!='\0';j++)
		printf("%c",*(p+j));
}
