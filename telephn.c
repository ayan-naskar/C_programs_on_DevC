#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct telephn
{
	char name[30];
	long int number;
	struct telephn *next;
};

struct telephn *head;

void addContact(struct telephn *p)
{
	struct telephn *a;
	a=head;
	//printf("executed!");
	if((head)==NULL)
	{
		//printf("executed!");
		head=p;
	}
	else
	{
		//printf("executed!");
		while(a->next!=NULL)
		{
			printf("executed!");
			a=a->next;
		}
		//printf("executed!");
		a->next=p;
	}
	printf("Your contect has been saved!\n");
}

void deleteContact(char *p)
{
	struct telephn *a,*x;
	int i,flag;
	a=head;
	x=head;
	if(head==NULL)
	printf("No element present!\n");
	else
	{
		while(a!=NULL)
		{
			flag=0;
			for(i=0;a->name[i]!='\0'&&a->name[i]==p[i];i++);
			if(a->name[i]==p[i])
			{
				if(a==head&&head->next==NULL)
				{
					printf("Deleted number was : %ld",head->number);
					head=NULL;
					return;
				}
				else if(a==head&&head->next!=NULL)
				{
					printf("Deleted number was : %ld",head->number);
					head=head->next;
					return;
				}
				else if(a->next==NULL)
				{
					printf("Deleted number was : %ld",a->number);
					x->next=NULL;
					return;
				}
				else
				{
					printf("Deleted number was : %ld",a->number);
					x->next=a->next;
					return;
				}
			}
			else
			{
				x=a;
				a=a->next;
			}
		}
	}
}

void search(char *p)
{
	int i;
	struct telephn *a;
	a=head;
	if(head==NULL)
		printf("no element present\n");
	else
	{
		while(a!=NULL)
		{
			if(strcmp(a->name,p)==0)
			{
				printf("Contact Found! Phn number: %ld",a->number);
				return;
			}
			a=a->next;
		}
		printf("Not present!\n");
	}
}

void browse()
{
	struct telephn *a;
	a=head;
	if(head==NULL)
	printf("No contacts present!\n");
	else
	{
		printf("Sot the List goes:\n");
		do
		{
			puts(a->name);
			printf("%ld\n",a->number);
			a=a->next;
		}while(a!=NULL);
	}
}

int main(void)
{
	int i;
	char ch;
	struct telephn *direc;
	head=NULL;
	//direc->next=NULL;
	char a[30];
	while(1)
	{
		here:printf("\n\nGive 1 for adding a new contact, 2 for deleting a contact, 3 for searching a contact, 4 for browsing the list or anything else to terminate\n");
		fflush(stdin);
		scanf("%c",&ch);
		fflush(stdin);
		switch(ch)
		{
			case '1':
				direc=(struct telephn *)malloc(sizeof(struct telephn));
				printf("Name : ");
				gets(direc->name);
				direc->next=NULL;
				//fflush(stdin);
				//printf("hi executed!");
				printf("Phone Number : ");
				scanf("%ld",&direc->number);
				//printf("hi executed!");
				addContact(direc);
				break;
			case '2':
				printf("Target Name : ");
				gets(a);
				deleteContact(a);
				break;
			case '3':
				printf("Target Name : ");
				gets(a);
				search(a);
				break;
			case '4':
				browse();
				break;
			default:
				printf("Are you sure u want to end?Y/N\n");
				scanf("%c",&ch);
				if(ch=='N')
					goto here;
				else
					exit(0);
		}
	}
	return 0;
}
