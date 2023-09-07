#include<stdio.h>
int q(int a,int b)
{
if(b==a)return a;
else return b+q(a,b-1);
}
int main()
{
    int n1,n2;
    int sum;
    scanf("%d%d",&n1,&n2);
    sum=q(n1,n2);
    printf("The sum from %d to %d is %d.\n",n1,n2,sum);
    return 0;
}