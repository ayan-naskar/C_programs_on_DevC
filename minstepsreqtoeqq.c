#include<stdio.h>

int min(int *a,int n)
{
	int i,min=*a;
	for(i=1;i<n;i++)
		if(min>*(a+i))
			min=*(a+i);
	//printf("\nmin = %d",min);
	return min;
}

int count(int *a, int *b, int n)
{
	int i=min(a,n),j,c;//c to count
	for(;i>=0;i--)
	{
		c=0;
		//printf("\nCurrent value of i = %d",i);
		for(j=0;j<n;j++)
		{
			//printf("\nCurrent value of j = %d",j);
			if((*(a+j)-i) % *(b+j)!=0)
			{
				//printf("\n*(a+%d)-%d mod *(b+%d) = %d\n *(a+j)=%d  *(b+j)=%d",j,i,j,(*(a+j)-i) % *(b+j),*(a+j),*(b+j));
				goto mainloop;
			}
			c+=(*(a+j)-i) / *(b+j);
		}
		return c;
		mainloop:c=c;
	}
	return -1;
}

int main(void)
{
	int *a,*b;
	int i,n;//n=number of elements
	
	printf("Enter the length of the arrays: ");
	scanf("%d",&n);
	
	a=(int*)malloc(n*sizeof(int));
	printf("\nEnter the array1 ->");
	for(i=0;i<n;i++){scanf("%d",(a+i));}
	
	b=(int*)malloc(n*sizeof(int));
	printf("\nEnter the array2 ->");
	for(i=0;i<n;i++){scanf("%d",(b+i));}
	
	/*for(i=0;i<n;i++)
		printf("*(a+%d)=%d  *(b+%d)=%d",i, *(a+i) ,i, *(b+i) );*/
	
	printf("\nNumber of Steps required to make the array1 equal is : %d",count(a,b,n));
}
