#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

typedef struct student
{
	char name[25];
	long long int mobno;
	char dept[10];
	char G;
	float cgpa;
}stud;

void input()
{
	FILE *f=fopen("Student123.dat","wb+");
	stud A;
	char x;
	int c=0;
	if(f==NULL)
	{
		printf("\nCould not create the file to store the datas");
		return;
	}
	while(1)
	{
		printf("\nIf you want to exit please press 1 else press any alphanumeric key");
		x=getch();
		if(x=='1')
		{
			fclose(f);
			return;
		}
		c++;
		printf("\nEnter the name of the student: ");
		fflush(stdin);
		gets(A.name);
		printf("\nEnter the mobile number: ");
		scanf("%lld",&A.mobno);
		fflush(stdin);
		printf("\nEnter the department: ");
		gets(A.dept);
		printf("\nEnter M for Male and F for Female: ");
		scanf("%c",&A.G);
		printf("\nEnter the cgpa: ");
		scanf("%f",&A.cgpa);
		fwrite(&A,sizeof(stud),1,f);
	}

}

void output()
{
	FILE *f=fopen("Student123.dat","rb");
	FILE *g=fopen("Output123.txt","w");
	stud k;
	if(f==NULL)
	{
		printf("\nCould not open the file!");
		return;
	}
	if(g==NULL)
	{
		printf("\nThe output file could not be created!");
		return;
	}
	printf("\nreading lol");
	//fread(&k,sizeof(k),1,f);
	//printf("\nname = %s",k.name);
	//fseek(f,-(sizeof(stud))*2,SEEK_SET);
	while(fread(&k,sizeof(k),1,f))
	{
		printf("\n1reading lol %s",k.name);
		if(k.cgpa>=8.0)
		{
			fprintf(g,"Student Name: ");
			fputs(k.name,g);
			fprintf(g,"\nMobile Number: %lld",k.mobno);
			fprintf(g,"\nDepartment: %s",k.dept);
			//fputs(k.dept,g);
			fprintf(g,"\nGender: ");
			if(k.G=='M')
				fprintf(g,"Male");
			else
				fprintf(g,"Female");
			fprintf(g,"\nCGPA: %f\n\n",k.cgpa);
			//fprintf(g,"");
		}
	}
	fclose(f);
	fclose(g);
}

int main()
{
	char a;
	printf("\nPress 1 to input or any other alphanumeric key to make the output file");
	a=getch();
	if(a=='1'){
		input();
		//return 0;
	}
	output();
	printf("\nExecution Completed!!");
	return 0;
}
/*
Create a file having the following details:

Student Name

Mobile No

Department

Gender

CGPA

Load 10 records in the file, three of them will have CGPA less than 8 and at least one should have CGPA equal to 8, rest more than 8.

Write a program in C that will copy the student details of those students who have CGPA more than or equal to 8 into another output file. You may create and load the input file within the program. Use structure data type in the program to represent the student details.
*/
