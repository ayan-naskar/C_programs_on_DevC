#include<stdio.h>
//10x^-3-2x^4+3x^5
//-7x^5+3x^-3-4x^0
//adding these two polynomials...

void sort(int *p,int k)//sorting succesfully done!!
{
	//printf("\n\nk=%d",k);
	int i=0,j=0,a,b;
	for(;j<k;j++)
	{
		for(i=0;i<k-1;i++)
		{
			a=i*2+1;
			b=i*2+3;
			if(*(p+a)<*(p+b))
			{
				//power part
				*(p+a)=*(p+a)+*(p+b);
				*(p+b)=*(p+a)-*(p+b);
				*(p+a)=*(p+a)-*(p+b);
				//samner diker part
				*(p+a-1)=*(p+a-1)+*(p+b-1);
				*(p+b-1)=*(p+a-1)-*(p+b-1);
				*(p+a-1)=*(p+a-1)-*(p+b-1);				
			}
		}
	}
}

//creating the list successfully done!!
int createList(char a[],int *xx)//returns the value of k
{
	int i=0,j=0;
	int numcreate,flag=0;//numcreate stores a number,flag contains whether it is power or normal; 1 means ^, 0 means without ^
	int k=0;
	puts(a);
	for(i=0;a[i]!='\0';i++)
	{
		printf("\ncharacter picked=%c.",a[i]);
		if(a[i]=='^')
			flag=1;
		if(a[i]=='+'||a[i]=='-'||a[i]=='x')
			goto start;
		
		//special cases
		//if(a[i]=='x')
		//not done, doing it later...
		
		
		//normal cases
		if((a[i]>='0'&&a[i]<='9'))
		{
			numcreate=0;
			for(j=i;(a[j]>='0'&&a[j]<='9');j++)
			{
				numcreate=numcreate*10+(int)(a[j]-'0');
			}
			printf("\nnumcreate=%d",numcreate);
			if(i!=0&&a[i-1]=='-')
				numcreate=-numcreate;
			if(flag==1)
			{
				*(xx+k+1)=numcreate;
				flag=0;
				k+=2;
			}
			else
				*(xx+k)=numcreate;
			i=j-1;			
		}
		start:i=i;
		//if(a[i]=='\0')
			printf("\n frustration : %d",i);
	}
	printf("\nk=%d",k);
	puts(a);
	return k;
	
}


//printing
void print(int *xx, int k)
{
	int i;
	for(i=0;i<k*2;i+=2)
	{
		if(i==0)
			printf("%dx^%d ",*(xx+i),*(xx+i+1));
		else if(*(xx+i)<0)
			printf("%dx^%d ",*(xx+i),*(xx+i+1));
		else
			printf("+%dx^%d ",*(xx+i),*(xx+i+1));
	}
	
}


//devine beuty of devine solve
int devineSolve(int *zz,int *xx, int k)
{
	int i,j,k3=0,q=0;
	for(i=0;i<k*2;i+=2)
	{
		if(*(xx+1+i)==*(xx+3+i))
		{
			*(zz+q)=*(xx+i)+*(xx+2+i);
			*(zz+q+1)=*(xx+i+1);
			k3+=2;
			q+=2;
			i+=2;
		}
		else
		{
			*(zz+q)=*(xx+i);
			*(zz+q+1)=*(xx+i+1);
			q+=2;
			k3+=2;
		}
	}
	return k3;
}

int main()
{
	char a[40];
	int i,j,num1,num2;//num1= number of values in eq1 num2=no of variables in eq2
	int k=0,k2=0,k3=0;//devine variable
	int x;
	int* xx,yy,zz;
	xx=&x;
	printf("\nEnter the Equation 1 -> ");
	gets(a);
	k=createList(a,xx);
	num1=k/2;
	//at this point, k is equal to the 2 times total number of polyn
	print(xx,num1);
	sort(xx,num1);
	printf("\nEnter the Equation 2 -> ");
	gets(a);
	yy=xx+k;
	k2=createList(a,yy);
	num2=k2/2;
	sort(yy,num2);
	printf("\n\nSorted eq1:");
	print(xx,num1);
	printf("\n\nSorted eq2:");
	print(yy,num2);
	zz=xx+k+k2;
	/*k3=devineSolve(xx,k,yy,k2);
	printf("Final Equation:\n");
	print(zz,k3);*/
	sort(xx,(k+k2)/2);
	//printf("\n\nSorted Hojoborolo:");
	//print(xx,(k+k2)/2);
	k3=devineSolve(zz,xx,num1+num2);
	printf("\n\n\nFinal Equation:");
	print(zz,k3/2);
	return 0;
}
