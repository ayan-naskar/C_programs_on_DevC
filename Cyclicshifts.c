#include<stdio.h>
//#include<conio.h>
#include<math.h>
#include<stdlib.h>

//1 5 2 10101

int main()
{
	int i,t,n,k,count,count2,flg,countk;
	long long int b,B,j,jj;
	char p[100001];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		count=b=B=flg=count2=countk=0;
		scanf("%d%d",&n,&k);
		getchar();
		for(j=0;j<n;j++)
		{
			scanf("%c",&p[j]);
			//B+=(p[j]=='1')?(1<<(n-j-1)):0;
			if(p[j]=='1')
				B++;
			else
				break;
		}
		puts(p);
		for(j=1;j<n;j++)
		{
			b=0;
			for(jj=j;jj<j+n;jj++)
			{
				//b+=(p[jj%n]=='1')?(pow(2,(n-(jj-j)-1))):0;
				if(p[jj%n]=='1')
					b++;
				else
					break;
			}
			if(B<b)
				B=b;
		}
		printf("B= %d\n",B);

		for(j=1;;j++)
		{
			b=0;
			for(jj=j;jj<j+n;jj++)
			{
				//b+=(p[jj%n]=='1')?(pow(2,(n-(jj-j)-1))):0;
				printf("p[%d mod %d]= %c\n",jj,n,p[jj%n]);
				if(p[jj%n]=='1')
					b++;
				else
					break;
			}
			printf("\n");
			//printf("b= %d jj[%d] mod n[%d]= %d\n",b,jj,n,jj%n);
			if(b==B)
			{
				countk++;
				count2+=j-count2;
				//printf("j= %d\n",j);
			}
			if(countk==k)
				break;
		}
		printf("%d\n",count2);
	}
}
