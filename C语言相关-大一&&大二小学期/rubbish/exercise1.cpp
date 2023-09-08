#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    int n;
    scanf("%d",&n);
    a=n/100;
    c=n%10;
    b=(n%100-c)/10;
    while (a>0)
    {
        printf("B");
        a--;
    }
      while (b>0)
    {
        printf("S");
        b--;
    }
    for (int i = 1; i <=c; i++)
    {
       printf("%d",i);
    }
    printf("\n");
    return 0;
    
}