#include <stdio.h>
int main()
{
	int i,n;
	int sum=1;
	scanf("%d",&n);
	for(i=n-1;i>0;i--)
	{
		sum=(sum+i)*2;
	}
	printf("sum=%d\n",sum);
 
}
