#include<stdio.h>
#include<string.h>
/*int a[100][100];
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int i,j;
	int lenth=2*m-1;
	for(i=1;i<=lenth;i++)
	{
		for(j=1;j<=m;j++)
		{
		if(i<=m)
		{
		if(j>=m-i+1)a[i][j]++;	
		}
		else 
		{
		if(j>=i-m+1)a[i][j]++;
		}	
		}
	}
	int d1,d2;
	d1=1+n;
	d2=m+n;
	for(i=1;i<=lenth;i++)
	{
		for(j=d1;j<=d2;j++)
		{
		if(i<=m)
		{
		if(j<=d1+i-1)a[i][j]++;
		}
		else
		{
		if(j<=d1+lenth-i)a[i][j]++;
		}	
		}
	}
	for(i=1;i<=lenth;i++)
	{
	for(j=1;j<=d2;j++)
	{
		if(a[i][j]>0)printf("* ");
		else printf("  ");
	}
	printf("\n");
}
return 0;
}*/
/*char a[100];
char b[100];
char s[100];
void convert(char s[100],int lenth)
{int counta=0,countb=0;
for (int i = 0; i <lenth-1; i++)
{
  if(s[i]==' ')continue;
  if(s[i]>='a'&&s[i]<='z')a[counta++]=s[i];
  if(s[i]>='A'&&s[i]<='Z')b[countb++]=s[i];
}

}
int main()
{
gets(s);
int lenth=strlen(s);
int i,count;
int p[100];
for (i = 0; i <lenth-1; i++)
{
  while(s[i]==' ')p[i]++;
}
convert(s,lenth);
}*/