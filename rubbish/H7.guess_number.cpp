#include<stdio.h>
#include<math.h>
int main()
{   int n;
    int sum=0;
    while (scanf("%d",&n),n!=0)
    {
        sum+=pow(2,n-1);
    }
    printf("%d\n",sum);
}