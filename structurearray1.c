//structure array
//array of structure
#include<stdio.h>

typedef long long int llp;

//llp a=71585;

typedef struct stud
{
	llp roll;
	char name[50];
	int marks;
	
}student;

int main()
{
	student s[3]; 
	student *p;  //struct stud s[5];  //array of structure
	int i;
	for(i=0;i<3;i++)
	{
		printf("\nRoll ? ");
		scanf("%lld",&s[i].roll);
		fflush(stdin);
		printf("\nName ? ");
		gets(s[i].name);
		printf("\nMarks ? ");
		scanf("%d",&s[i].marks);
	}
	p=s;
	printf("\n %d %d %d",sizeof(int),sizeof(long int),sizeof(long long int));
	printf("\nGiven records: ");
	for(i=0;i<3;i++)
	{
		printf("\nRoll : %lld",p->roll);
		printf("\nName : ");
		puts(p->name);
		printf("\nMarks : %d",p->marks);
		p++;
	}
	
}
