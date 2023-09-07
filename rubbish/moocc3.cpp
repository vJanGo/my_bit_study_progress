#include<stdio.h>
int main()
{
	int a[100][100],m,n,x[100],y[100],sum=0;
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<m;i++)
	{
		x[i]=a[i][0];
		for(int j=1;j<n;j++)
		{
			if(a[i][j]>x[i])
			x[i]=a[i][j];
		}
	}
	for(int j=0;j<n;j++)
	{
		y[j]=a[0][j];
		for(int i=1;i<m;i++)\
		{
			if(a[i][j]<y[j])
			y[j]=a[i][j];
		}
	}
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]==x[i]&&a[i][j]==y[j])
			{
				printf("Point:a[%d][%d]==%d\n",i,j,a[i][j]);
				sum++;
			}
		}
	}
	if(sum==0)
		printf("No Point\n"); 
	return 0;
}