#include<stdio.h>
#include<stdlib.h>//terminate with space
#include<ctype.h>
#include<string.h>
struct list
{
	char n;
	char *num;
};
int main(void)
{
	int i,j,s,c=0,k;
	struct list n1,n2,n3;
	printf("Enter the digits in the first number: ");
	scanf("%d",&n1.n);
	fflush(stdin);
	n1.num=(char*)malloc((n1.n+1)*sizeof(char));
	printf("\nEnter the first number: ");
	gets(n1.num);
	//puts(n1.num);
	printf("Enter the digits in the second number: ");
	scanf("%d",&n2.n);
	fflush(stdin);
	//printf("\n%d",n2.n);
	n2.num=(char*)malloc((n2.n+1)*sizeof(char));
	printf("\nEnter the second number: ");
	gets(n2.num);
	if(strlen(n1.num)!=n1.n||strlen(n2.num)!=n2.n)
	{
		printf("Error in the input!");
		exit(0);
	}
	for(i=0;n1.num[i]!='\0';i++)
	{
		if(!isdigit(n1.num[i]))
		{	
			printf("Error in the input!");
			exit(0);
		}
	}
	for(i=0;n2.num[i]!='\0';i++)
	{
		if(!isdigit(n2.num[i]))
		{	
			printf("Error in the input!");
			exit(0);
		}
	}
	
	//puts(n1.num);
	//puts(n2.num);
	//if(n1.n>=n2.n)
	//{
		n3.n=((n1.n>n2.n)?n1.n:n2.n)+2;
		n3.num=(char*)malloc(n3.n*sizeof(char));
		n3.num[n3.n-1]='\0';
		k=n3.n-2;
		for(i=n2.n-1,j=n1.n-1;i>=0||j>=0;i--,j--,k--)
		{	
			if(i<0)
			{
				s=(c+(n1.num[j]-48));
				c=s/10;
				s=s%10;
				n3.num[k]=(char)(s+48);
			}
			else if(j<0)
			{
				s=(c+(n2.num[i]-48));
				c=s/10;
				s=s%10;
				n3.num[k]=(char)(s+48);
			}
			else
			{			
				s=(c+(n1.num[j]-48)+(n2.num[i]-48));
				c=s/10;
				s=s%10;
				n3.num[k]=(char)(s+48);
			}
			//printf("\n%c<--",n3.num[k]);
		}
		//n3.num[0]='0';
		if(c>0)
		{
			n3.num[k--]=(char)(c+48);
		}
		/*while(k>=0)
		{
			n3.num[k]='0';
			k--;
		}*/
		for(i=k+1;i<n3.n;i++)
			printf("%c",n3.num[i]);
		//puts(n3.num);
		
	//}
	/*for(i=0;;i++)
	{
		scanf("%c",n1.num);
		if(*n1.num==' ')
		break;
		*n1=*n1.next;
	}
	printf("Enter the number2: ");
	for(i=0;;i++)
	{
		scanf("%c",n2.num);
		if(*n2.num==' ')
		break;
		*n2=*n2.next;		
	}
	printf("The answer is: ");*/
	
}
