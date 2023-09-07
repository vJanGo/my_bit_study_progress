#include<stdio.h>
int i;
int* xipai(int num,int* a)
{int b[100000];
for ( i = 1; i <=num; i++)
{
    b[i]=a[i];
}
for ( i = 1; i <=num; i++)
{
    if(i%2==0)a[i]=b[i/2];
    else a[i]=b[num/2+(i+1)/2];
}
return a;
}
int check(int num,int* a)
{int flag=0;
for(i=1;i<=num;i++)
{
if(i!=a[i])flag=1;
}
return flag;
}
int main()
{   int a[100000];
    int n;
    int* b;
    int flag;
    int count=0;
    scanf("%d",&n);
    for ( i = 1; i <=2*n; i++)
    {
    a[i]=i;
    }
    do
    {
    b=xipai(2*n,a);
    flag=check(2*n,b);
    count++;
    } while (flag==1);
    printf("%d\n",count);
    return 0;
}