#include<stdio.h>
int check(int a)
{
    for (int i = 1; i <=a; i++)
    {
        if(i*i==a)return a;
    }
    return 0;
}
int main()
{
    int m,n,sum=0;
    scanf("%d,%d",&m,&n);
    for (int i = m; i <=n; i++)
    {
        sum+=check(i);
    }
    printf("%d\n",sum);
}