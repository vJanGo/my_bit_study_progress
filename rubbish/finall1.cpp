#include<stdio.h>
#include<string.h>
	char s[1000];
	char word[100][100];
int main()
{
	int hang=1,i,j;
	int lie=1;
	int count=0;
	scanf("%s",s);
	for(i=0;i<strlen(s)-1;i++)
	{
		if(s[i]!=' ')
		{
			word[hang][lie++]=s[i];
		}
		else
		{
			hang++;lie=1;count++;
		}
	}
	for(i=0;i<count;i++)
	for(j=0;j<count-i;j++)
	{
		if(strcmp(word[i],word[i+1])>0)
		{
			char tmp[100];
			strcpy(tmp,word[i+1]);
			strcpy(word[i+1],word[i]);
			strcpy(word[i],tmp);
		}
	}
	for(i=1;i<=count+1;i++)
	{
		if(i==count+1)printf("%s",word[i]);
		else printf("%s ",word[i]);
	}
	return 0;
}