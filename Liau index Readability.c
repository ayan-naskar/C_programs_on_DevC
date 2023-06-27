//text file
#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *f;
	int i,words=0,sentence=0,characters=0,flag;
	float G;
	char s;
	char p;
	f=fopen("LaiuIndexCheck.txt","r");
	if(f==NULL)
	{
		printf("Error opening file!!");
		exit(0);
	}
	huha:words=sentence=characters=flag=0;
	s=fgetc(f);
	printf("Text: ");
	if((s>='a'&&s<='z')||(s<='Z'&&s>='A'))
	characters++;
	while(1)
	{
		p=fgetc(f);
		if(p==EOF)
			break;
		if(((s>='a'&&s<='z')||(s<='Z'&&s>='A')||s=='\'')&&(p==' '||p=='\n'||p=='.'||p==','||p=='!'||p=='?'))
		{
			words++;
		}
		if(((s>='a'&&s<='z')||(s<='Z'&&s>='A'))&&(p=='.'||p=='\n'||p=='!'||p=='?'))
		{
			sentence++;
		}
		if((p>='a'&&p<='z')||(p<='Z'&&p>='A'))
		{
			characters++;
		}
		printf("%c",s);
		s=p;
		if(p=='\n')
		{
			flag=1;
			goto hahu;
		}
	}
	hahu:printf("%c",s);
	G=0.0588*(100 / (float)(words))* characters - 0.296 * (100 / (float)(words)) * sentence - 15.8;
	printf("\n\nWords = %d\tSentences = %d\tCharacters = %d\t",words,sentence,characters);
	if(G<1)
	printf("\nBefore Grade 1");
	else if(G>=16)
	printf("\nGrade 16+");
	else
	printf("\nGrade %d",((int)G+(((G-(int)G)>=0.5)?1:0)));
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
	if(flag==1)
	goto huha;
	fclose(f);
}
