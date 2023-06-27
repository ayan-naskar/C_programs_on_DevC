#include<stdio.h>
#include<stdlib.h>

int lengthCal(char *p,int r,int c, int x,int y,int ri8,int dwn)
{
	int i,ca=0;
	c+=2;
	for(i=0;;i++)
	{
		
		if(*(p+c*x+y+i*ri8+c*dwn*i)=='1')
			ca++;
		else 
			break;
	}
	return ca-1;
}

int calculate(char *p,int r, int c)
{
	int i,j,a,b,lenvd,lenvu,lenhr,lenhl,k;//v=vertical h=horizontal r/l=right/left u/d=up/down
	int cal=0;
	for(i=1;i<=r;i++)
	{
		lenvd=lenvu=lenhr=lenhl=0;
		a=(c+2)*i;
		for(j=1;j<=c;j++)
		{
			if(*(p+a+j)=='1'&&(*(p+a+j+1)=='1'||*(p+a+j-1)=='1')&&(*(p+(c+2)*(i+1)+j)=='1'||(*(p+(c+2)*(i-1)+j)=='1')))
			{
				printf("executed");
				if(*(p+a+j+1)=='1'||*(p+a+j-1)=='1')
				{
					lenvd=lengthCal(p,r,c,i,j,0,1);
					lenvu=lengthCal(p,r,c,i,j,0,-1);
					printf("lenvd=%d lenvu=%d",lenvd,lenvu); 
				}
				if(*(p+(c+2)*(i+1)+j)=='1'||*(p+(c+2)*(i-1)+j)=='1')
				{
					lenhr=lengthCal(p,r,c,i,j,1,0);
					lenhl=lengthCal(p,r,c,i,j,-1,0);
				}
				if((lenvd!=0 && lenhr!=0)&&((lenvd>lenhr)?lenvd:lenhr)/((lenvd>lenhr)?lenhr:lenvd)>=2)//lenvd and lenhr
					cal+=(lenvd>lenhr)?lenhr:lenvd;
				if((lenvd!=0 && lenhl!=0)&&((lenvd>lenhl)?lenvd:lenhl)/((lenvd>lenhl)?lenhl:lenvd)>=2)//lenvd and lenhl
					cal+=(lenvd>lenhl)?lenhl:lenvd;
				if((lenvu!=0 && lenhl!=0)&&((lenvu>lenhl)?lenvu:lenhl)/((lenvu>lenhl)?lenhl:lenvu)>=2)//lenvu and lenhl
					cal+=(lenvu>lenhl)?lenhl:lenvu;
				if((lenvu!=0 && lenhr!=0)&&((lenvu>lenhr)?lenvu:lenhr)/((lenvu>lenhr)?lenhr:lenvu)>=2)//lenvu and lenhl
					cal+=(lenvu>lenhr)?lenhr:lenvu;
			}
			printf("%d\t",*(p+(c+2)*i+j));
		}
		printf("\n");
		
	}
	//printf("")
	return cal;
}

int main(void)
{
	int t,i,j,k,r[100],c[100];
	char *arr[1002][1002];
	int ans[100];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&r[i],&c[i]);
		getchar();
		for(j=1;j<=r[i];j++)
		{
			for(k=1;k<=c[i];k++)
			{
				scanf("%c",arr[j][k]);
				getchar();
				*arr[j+1][k]='0';
			}
			*arr[j][k]='0';
		}
		for(j=1;j<=r[i];j++)
		{
			for(k=1;k<=c[i];k++)
			{
				printf("%c\t",*arr[j][k]);
			}
			printf("\n");
		}printf("\n");  
		ans[i]=calculate(arr,r[i],c[i]);
	}
	for(i=0;i<t;i++)
	{
		printf("Case #%d: %d\n",i+1,ans[i]);
	}
	return 0;
}
/*
1
4 3
1 0 0
1 0 1
1 0 0
1 1 0
*/
