#include<stdio.h>
int main()
{  int a[100]={0};
    int n;
    int i=0;
    int j;
    scanf("%d",&n);
    while (n>0)
    {
       a[i]=n%10;
       n=n/10;
       i++;
    }
    for (j = 1; j <=i; j++)
	{
		for (int z= 0; z< i-j; z++)//利用双循环嵌套去比较相邻元素
		{
			if (a[z] <a[z + 1])
			{
				int t = a[z];
				a[z] = a[z+ 1];
				a[z+ 1] = t;
			}
		}
    }
    for ( j = 0; j < i; j++)
    {
       printf("%d",a[j]);
    }
    printf("\n");
   
    return 0;
    
}