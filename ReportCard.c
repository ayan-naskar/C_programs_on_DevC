#include<stdio.h>

typedef struct studentsReportCard
{
	long long int roll;
	char name[30];
	int marks[7];
}RC;

void printit(RC *p,int i)
{
	int j;
	int sum=0;
	printf("\nRank %d: ",i);
	puts(p->name);
	printf("%lld\n",p->roll);
	for(j=0;j<=5;j++)
	{
		printf("%d ",p->marks[j]);
		sum+=p->marks[j];
	}
	printf("\n");
	p->marks[6]=sum;
	if(++i==2)
	return;
	p++;
	printit(p,i);
}

int main(void)
{
	RC stn[10],temp,hus;
	int i,j,sum;
	printf("Report Card Generation 2021\n~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	for(i=0;i<2;i++)
	{
		fflush(stdin);
		printf("\n\n_________\nEntry %2d:\n^^^^^^^^^\nName: ",i+1);
		gets(stn[i].name);
		//puts(stn[i].name);
		//ffush(stdin);
		//getchar;
		printf("Roll num: ");
		scanf("%lld",&stn[i].roll);
		printf("Marks of 6 subjects: ");
		sum=0;
		for(j=0;j<6;j++)
		{
			scanf("%d",&stn[i].marks[j]);
			sum+=stn[i].marks[j];
		}
		stn[i].marks[j]=sum;
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<1;j++)
		{
			if(stn[j].marks[6]<stn[j+1].marks[6])
			{
				temp=stn[j];
				stn[j]=stn[j+1];
				stn[j+1]=temp;
			}
		}
	}
	//printf("\fReport Card 2021\n~~~~~~~~~~~~~~~~\n\nName\t\t\tRoll Num\t\t\tMarks");
	printit(stn,0);
	return 0;
}
