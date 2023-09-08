#include<stdio.h>
int t1(int n)
{
if(n==1)return 1;
else if(n==2)return 2;
else return t1(n-1)+t1(n-2);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",t1(n));
}