//merge Sort
#include<stdio.h>
#include<stdlib.h>

void merge(int *p, int l, int m, int r)
{
	int *x,*y,i,j,k=l;
	x=(int*)malloc(sizeof(int)* (m-l+1));
	y=(int*)malloc(sizeof(int)* (r-m));
	for(i=0;i<=(m-l);i++)
		*(x+i)=*(p+i+l);
	for(j=0;j<(r-m);j++)
		*(y+j)=*(p+j+m+1);
	i=j=0;
	while(i<=(m-l) && j<(r-m))
	{
		if(*(x+i)<*(y+j))
		{
			*(p+k)=*(x+i);
			i++;
		}
		else
		{
			*(p+k)=*(y+j);
			j++;
		}
		k++;
	}
	while(i<=(m-l))
	{
		*(p+k)=*(x+i);
		i++;
		k++;
	}
	while(j<(r-m))
	{
		*(p+k)=*(y+j);
		j++;
		k++;
	}
}

void sort(int *p,int l, int r)
{
	int m;
	if(l<r)
	{
		m=(l+r)/2;
		sort(p,l,m);
		sort(p,m+1,r);
		merge(p,l,m,r);
	}
}

int main()
{
	int n,*p,i;
	printf("Enter the number of elements: ");
	scanf("%d",&n);
	p=(int*)malloc(sizeof(int)*n);
	printf("\nEnter the elements of the array: ");
	for(i=0;i<n;i++)
		scanf("%d",p+i);
	printf("\nThe elements of the array before sorting is:");
	for(i=0;i<n;i++)
		printf("\t%d",*(p+i));
	sort(p,0,n-1);
	printf("\nThe elements of the sorted array is:");
	for(i=0;i<n;i++)
		printf("\t%d",*(p+i));
}
