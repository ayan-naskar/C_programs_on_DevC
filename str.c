#include<stdio.h>
#include<stdlib.h>

struct student{
	char name[20];
	int mark;
};

int main()
{
	struct student A;
	struct student *B;
	goto here;
	//input
	printf("\nEnter the name: ");
	gets(A.name);
	printf("\nEnter the mark: ");
	scanf("%d",&A.mark);
	
	//output
	printf("\nThe name you have entered: ");
	puts(A.name);
	printf("\nMarks: %d",A.mark);

	printf("\n~~~~~~~~~~~~~~~~~~~~~\nDifferent way\n");
	here: 
	B=(struct student*)malloc(sizeof(struct student));
	//input
	printf("\nEnter the name: ");
	fflush(stdin);
	gets(B->name);
	printf("\nEnter the mark: ");
	scanf("%d",&B->mark);

	//output
	printf("\nThe name you have entered: ");
	printf("\nMarks: %d",B->mark);
	puts((B->name));
}
