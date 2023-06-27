#include<stdio.h>

int strends(char* s, char* t)
{
	int i,j,ci,cj;
	for(j=0;t[j]!='\0';j++);
	for(i=0;s[i]!='\0';i++);
	ci=--i;
	cj=--j;
	if(cj>ci)
		return 0;
	for(j=cj;s[ci]==t[j]&&j>=0;j--)
	{
		ci--;
	}
	printf("ci=%d  i=%d  cj=%d\n",ci,i,cj);
	if(i-ci-1==cj)
		return 1;
	else return 0;
}
int main(void)
{
	char s[40],t[20];
	printf("Enter the main string :");
	gets(s);
	printf("Enter the second string :");
	gets(t);
	printf("The Output is :%d",strends(s,t));
}
