#include<stdio.h>
#include<stdlib.h>

void rev(int n, int *p)
{
	int i,t;
	for(i=0;i<n/2;i++)
	{
		t=*(p+i);
		*(p+i)=*(p+(n-i-1));
		*(p+(n-i-1))=t;
	}
}

int calculate(int n, int *p)
{
	int i,j,end,end1,start,start1,diff,f;
	end=end1=start=start1=f=0;
	diff=*p-*(p+1);
	for(i=0;i<n-1;i++)
	{
		//printf("\ni=%d  n=%d\n",i,n);
		if(*(p+i)-*(p+i+1)==diff)
		{
			end=i+1;
			//printf("\ni=%d  n=%d\n",i,n);
			if(i+1==n-1&&end-start>end1-start1)
			{
				//printf("\ni=%d  n=%d\n",i,n);
				end1=end;
				start1=start;
			}
		}
		else
		{
			if(f==0)
			{
				if(i+2<n&&((float)*(p+i)- (float)*(p+i+2))/2==(float)diff)
				{
					//printf("executed");
					i+=2;
					end+=2;
					f=1;
				}
				else 
				{
					//printf("executed!");
					end=i+1;
					f=1;
					//start=i;
					if(end-start>end1-start1)
					{
						//printf("end=%d  start=%d\n",end,start);
						end1=end;
						start1=i;
						//diff=*(p+i)-*(p+i+1);
					}
					else
					{
						end=i+1;
						start=i;
						diff=*(p+i)-*(p+i+1);
					}
					if(i==n-2)
					start=i;//needs to be deleted asap!!
				}
			}
			else
			{
				f=0;
				if(end-start>end1-start1)
				{
					end1=end;
					start1=start;
					end=i+1;
					start=i;
				}
				else
				{					
					end=i+1;
					start=i;
				}
			}diff=*(p+i)-*(p+i+1);
		}
		//printf("\ni=%d  n=%d\n",i,n);
	}
	printf("%d",diff);
	return (end1-start1>end-start)?end1-start1:end-start;
}

int main(void)
{
	int t, *n, *s[100],i,j,way1=0,way2;
	scanf("%d",&t);
	//printf("t=%d\n",t);
	getchar();
	n=(int*)malloc(t*sizeof(int));
	for(i=0;i<t;i++)
	{
		scanf("%d",(n+i));
		getchar();
		//printf("n=%d\n",*(n+i));
		s[i]=(int*)malloc(*(n+i)*sizeof(int));
		for(j=0;j<*(n+i);j++)
			scanf("%d",(s[i]+j));
	}
	for(i=0;i<t;i++)
	{
		way1=calculate(*(n+i),s[i]);
		rev(*(n+i),s[i]);
		way2=calculate(*(n+i),s[i]);
		//printf("\nway1=%d  way2=%d\n",way1,way2);
		printf("Case #%d: %d\n",i+1,1+((way1>way2)?way1:way2));
	}
	return 0;
}
/*1
9
5 5 4 5 5 5 4 5 6*/

/*11
2
0 0
2
0 10000000000
2
1000000000 1000000000
5
1 2 3 5 5
5
5 5 3 2 1
5
9 7 5 1 1
6
1 2 3 5 5 5
5
1 1 3 4 5
6
5 5 5 3 2 1
5
1 3 4 5 5
5
9 1 3 5 7*/
