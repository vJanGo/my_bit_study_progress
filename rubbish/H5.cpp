#include<stdio.h>
int num(int a[5])
{
  int n1,n2;
  n1=a[0]+a[2]+a[4]+a[6]+a[8]+a[10];
  n2=a[1]+a[3]+a[5]+a[7]+a[9];
  return 9-((n1*3+n2-1)%10);
}
int main()
{   int i;
    int a[11];
    scanf("%d",&a[0]);
    for ( i = 1; i <6; i++)
    {
        scanf("%1d",&a[i]);
    }
     for ( i = 6; i <11; i++)
    {
        scanf("%1d",&a[i]);
    }
    printf("%d\n",num(a));
    return 0;
}