#include<stdio.h>
#include<stdlib.h>

int sq[];

long int calculate(long int n, long *p){
	int i,j,cal=0;
	
}

int main(void){
	int t,i,j;
	long int n[100],*s[100];
	scanf("%d",&t);
	for(i=0;i<t;i++){
		scanf("%ld",&n[i]);
		s[i]=(long int*)malloc(n[i]*sizeof(long int));
		for(j=0;j<n[i];j++)
		scanf("%ld",s[i]);
	}
	squares();
	for(i=0;i<t;i++){
		printf("Case #%d: %ld\n",i+1,calculate(n[i],s[i]));
	}
	return 0;
}
