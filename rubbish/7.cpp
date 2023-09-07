#include<stdio.h>
#include<string.h>
char s[1000];
	char word[100][100];
int main()
{
	int hang=0,i,j;
	int lie=0;
	int count=0;
	gets(s);
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]!=' ')
		{
			word[hang][lie++]=s[i];
		}
		else
		{
			hang++;lie=0;count++;
		}
	}
	for(i=0;i<count;i++)
	for(j=0;j<count-i;j++)
	{
		if(strcmp(word[j],word[j+1])>0)
		{
			char tmp[100];
			strcpy(tmp,word[j+1]);
			strcpy(word[j+1],word[j]);
			strcpy(word[j],tmp);
		}
	}
	for(i=0;i<count+1;i++)
	{
		if(i==count)printf("%s",word[i]);
		else printf("%s ",word[i]);
	}
	printf("\n");
	return 0;
}
/*int main()
{
	int n;
	scanf("%d",&n);
	int count=1;
	for ( int i = 1; i <=n; i++){
	for(int j=1;j<=n;j++)
	{
		if(j>=i)printf("%d",count++);
		else printf(" ");
	}
	count=1;
	printf("\n");
	}
}*/
/*nt n1,n2,n3,n4;
int check(int x,int y)
{   if(x==n3&&y==n4)return 1;
    else if(x>n3||y>n4) return 0;
	else return check(x,x+y)+check(x+y,y);
}
int main()
{
	scanf("%d,%d",&n1,&n2);
	scanf("%d,%d",&n3,&n4);
    if(check(n1,n2))printf("Yes.\n");
    else printf("No.\n");
	return 0;
}*/