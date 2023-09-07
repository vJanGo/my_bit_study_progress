#include<stdio.h>
int num(int a,int b)
{
    if(a>b)return a-b;
    else return b-a;
}
int main()
{   int i,j;
    int n1,n2;
    int a[100];
    int b[100];
    int sum=0;
    int sum2=0;
    int ans,x,y;
    int min=65535;
    scanf("%d%d",&n1,&n2);
    for ( i = 0; i < n1; i++)
    {
       scanf("%d",&a[i]);
       sum+=a[i];
    }
    for ( i = 0; i < n2; i++)
    {
       scanf("%d",&b[i]);
    }
    for ( i = 0; i <n2; i++)
        for (int j = i; j <n2; j++)
        { sum2=0;
         for (int z =i; z <=j; z++)
            sum2+=b[z];
         if(num(sum,sum2)<min)
         {min=num(sum,sum2);
         x=i;
         y=j;
         }
        }

 for (int i = x; i < y; i++)
    {
     printf("%d ",b[i]);
    }
    printf("%d",b[y]);
    printf("\n");
}