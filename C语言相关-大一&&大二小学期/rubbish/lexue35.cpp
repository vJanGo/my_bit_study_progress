#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int len;
    len=2*n-1;
    int num=0;
    for (int i = 1; i <=n; i++)
    {
      for (int  j = 1; j<=len-(n-i) ; j++)
      {
        if(j>=n+1-i&&j<=n)
        {   num++;
            printf("%2d",num);
          
        }
        else if(j>n)
        {
            num--;
            printf("%2d",num);
        }
        else printf("  ");
      }
      printf("\n");
      num=0;
    }
 return 0;   
}