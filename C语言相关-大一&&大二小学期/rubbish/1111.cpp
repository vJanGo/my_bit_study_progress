#include<stdio.h>

int main()
{
    long long n,p,tmp=1;
    scanf("%lld%lld",&n,&p);
    long long a[n];
    for (int  i = 0; i < n; i++)
    {
    scanf("%lld",&a[i]);
    }
    for (int i = 0; i <n; i++)
    {
        tmp=((a[i]%p)*(tmp%p))%p;
    }
    printf("%lld",tmp);
    return 0;
}