#include<stdio.h>
int a[100][100];
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
	for(i=1;i<100;i++)
	{
	
	for(j=1;j<100;j++)
	{
		if(a[i][j]>0)printf("*");
		else printf(" ");
	}
	printf("\n");
}
return 0;
}