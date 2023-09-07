#include<stdio.h>
int main()
{   int a[10]={0};
    int b[10]={0,1,2,3,4,5,6,7,8,9};
    int i;
    for ( i = 0; i < 10; i++)
    {
    scanf("%d",&a[i]);
    }
    
    int num0;
    num0=a[0];
    int num=0;
    
    for ( i = 1; i <10; i++)
    {
        if(a[i]!=0)
        {printf("%d",b[i]);a[i]--;break;}
    }
    for ( i = 0; i <num0; i++)
    {
        printf("0");
    }
    for ( i = 1; i < 10; i++)
    {
      while (a[i]!=0)
      {
        printf("%d",b[i]);
        a[i]--;
      }
   
    }
    printf("\n");
    return 0;
    
}