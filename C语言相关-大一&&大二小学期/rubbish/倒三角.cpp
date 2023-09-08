#include<stdio.h>
int main()
{int i=0,j=0,n;
scanf("%d",&n);
int m=2*n-1;
for(i=0;i<n;i++)
{
	int p=2*(n-i)-1;
	for(j=1;j<=m;j++)
	{
		if(j<=p)printf("*");
		
	}
	printf("\n");
}
return 0;
}