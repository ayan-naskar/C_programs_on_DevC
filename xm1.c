#include<stdio.h>
#include<math.h>
int main()
{
	int i,n;
	printf("Enter an integer number\n");
	scanf("%d",&n);
	for (i=2;i<=sqrt(n);i++)
	{
    	if (n%i == 0)
		{
    		printf("%d is not a prime number",n);
		}
    	else
		{
    		printf("%d is a prime number",n);
		}
    	return 0;
	}
}
