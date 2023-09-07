#include<stdio.h>
int main()
{int n,i,j,a=1,m,b;
scanf("%d",&n);
for(m=1;m<n;m++){
	a=2*a;
}
b=a/2; 
a=a-1;
for(i=1;i<=n;i++)
{
	for(j=1;j<=a;j++)
	{
    if(j<=b-i||j>b+i-1)printf(" ");
    else printf("*");
	}
	printf("\n");
	return 0;
}
	
	
	
	
	
	
	return 0;
}
