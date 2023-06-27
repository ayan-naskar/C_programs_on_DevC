#include<stdio.h>

int main()
{
	int a[50][50],i,j,m,n;
	int **p;
	int *cp[50];
	printf("\nEnter row: ");
	scanf("%d",&m);
	printf("\nEnter Column: ");
	scanf("%d",&n);
	printf("\nEnter Elements: ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
		cp[i]=a[i];
	}
	p=cp;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",*(*(p+i)+j));
		}
		printf("\n");
	}
	printf("\n\n");
	for(i=0;i<m;i++)
	{
		printf("\n&a[%d][0]=%d\t",i,&a[i][0]);
		printf("\ncp[%d]=%d",i,cp[i]);
	}
	i=1;j=2;
	printf("\na=%d",a);
	printf("\ncp=%d",cp);
	printf("\ncp[0]=%d",cp[0]);
	printf("\ncp[1]=%d",cp[1]);
	
	printf("\n\np=%d",p);
	printf("\n*p=%d",*p);
	printf("\np+1=%d",p+1);
	printf("\n*(p+1)=%d",*(p+1));
	printf("\n**p=%d",**p);
	
	printf("\n\n*(*p+1)=%d",*(*p+1));
	printf("\n*(*p+%d)+0)=%d",i,*((*p+i)+0));
	printf("\n*(*(p+0)+%d)=%d",j,*(*(p+0)+j));
	printf("\n*(*(p+%d)+%d)=%d",i,j,*(*(p+i)+j));
}
