#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int ch;
	FILE *f;
	struct detail{
		char name[20];
		int roll;	
	};
	struct detail *data=NULL;
	while(1)
	{
		printf("\nPress 1 to input a data, Press 2 to show last data, 3 to show all data, anything else to quit: ");
		ch=getch()-'0';
		//printf("\n %d",ch);
		switch(ch)
		{
			case 1:
				f=fopen("Stud_Dat1.dat","a");
				//printf("afe");
				if(f==NULL)
				{
					printf("\nCould not open the file!!");
					continue;
				}
				data=(struct detail*)malloc(sizeof(struct detail));
				printf("\nEnter the name of the student: ");
				fflush(stdin);
				gets(data->name);
				printf("\nEnter the roll number: ");
				scanf("%d",&data->roll);
				fwrite(data,sizeof(struct detail),1,f);
				fclose(f);
				break;
			case 2:
				printf("\nThe Last entered data is->\nStudent name: ");
				puts(data->name);
				printf("Roll number: %d",data->roll);
				break;
			case 3:
				f=fopen("Stud_Dat1.dat","r");
				if(f==NULL)
				{
					printf("\nCount not open the file!!");
					continue;
				}
				while(fread(data,sizeof(struct detail),1,f))
				{
					printf("\nStudent Name: ");
					puts(data->name);
					printf("Roll Number: %d\n",data->roll);
				}
				break;
			default:
				printf("\nProcess completed!!");
				exit(0);
		}
	}
}
