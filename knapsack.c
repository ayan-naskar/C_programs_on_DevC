#include <stdio.h> 
void main()
{
	int n, m, i, j, x, temp, job[100], p[100], d[100], slots[100], d_max;
	printf("Enter the number of Jobs(j): ");
	scanf("%d",  &j);
	
	printf("Enter profits for each job: ");
	for(i=0; i<j; i++)
	{
		printf("\n Profit for job %d = ", i+1);
		scanf("%d", &p[i]);
	}
	printf("\n Enter the deadlines for each job: ");
	for(i=0; i<j; i++)
	{
		printf("\n Deadline for job %d = ", i+1);
		scanf("%d", &d[i]);
	}
	
	
	for (i=0; i<j; i++)
    {
        for(n=0; n<j-i-1; n++)
        {
            if (p[n]<p[n+1]);
            {
            

                temp = p[n+1];
                p[n+1] = p[n];
                p[n]= temp;
                
                temp = d[n+1];
                d[n+1] = d[n];
                d[n] = temp;
                
        
            }
        }
    }
	
	
	
	printf("\n The table after sorting based on profit: ");
	
	printf("\n Job No.: \t\t");
	for(i=0; i<j; i++)
	{
		printf("%d\t", i+1);
	}
	
	printf("\n PROFIT: \t\t");
    for(i=0;i<j;i++)
    {
        printf("%d\t",p[i]);
    }
    
    printf("\n DEADLINE: \t\t");
    for(i=0; i<j; i++)
    {
    	printf ("%d\t",d[i]);
	}
	
	d_max=0;
	for(i=0; i<j; i++)
	{
		if (d[i] > d_max)
		{
			d_max=d[i];
		}
	}
	
    printf("\n According to the deadline give, there are, %d slots",d_max );
    //printf("%d\t", d_max);
    //printf(");
    
    
    
   
}
/*
2
10 
15
5
4

*/
