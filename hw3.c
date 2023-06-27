#include<stdio.h>
//prints ' with the initials
int main(){
	char a[40],b[10];
	int i,j=0;
	printf("Enter the Name->");
	gets(a);
	
	b[0]=a[0];
	for(i=1;a[i]!='\0';i++){
		if (a[i]==' '&&a[i+1]!='\0'&&a[i+1]!=' ')
			b[++j]=a[i+1];
	}
	b[++j]='\0';
	puts(b);
}
