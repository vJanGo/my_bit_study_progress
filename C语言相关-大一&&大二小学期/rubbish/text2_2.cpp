#include<stdio.h>
int a[10000],b[10000];
int main()
{
    int n,k,tmp=0,flag=0;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        b[a[i]]++;
    }
    for (int i = 0; i <n; i++)
    {
        if(b[a[i]]>k)
        {
            b[a[i]]=0;
            printf("%d\n",a[i]);
            flag++;
        }
    }
    if(flag==0)printf("No such element.\n");
    return 0;
}