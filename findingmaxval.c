//finding the maximum number that can be stored in long long int
#include<stdio.h>

int main(void)
{
	long long int i;
	printf("Loading...");
	for(i=1;i>0;i+=10000000000)
		if(i%100000000000==0)
		printf("\tpassed %lld",i);
	printf("\nanswer is %lld",i);
}
