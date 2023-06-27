#include<stdio.h>

int main()
{
	char a[40];
	int i=0,countv=0,countn=0,countc=0;
	printf("\nEnter the string: ");
	gets(a);
	for(;a[i]!='\0';i++){
		if(a[i]>='A'&&a[i]<='Z')
			a[i]=a[i]+32;
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
			countv++;
		else if((int)a[i]>=(int)'0'&&(int)a[i]<=(int)'9')
			countn++;
		else if((int)a[i]>=(int)'b'&&(int)a[i]<=(int)'z')
			countc++;
	}
	printf("\nNumber of vowels = %d\nNumber of Consonants = %d\nNumber of Digits = %d",countv,countc,countn);
}
