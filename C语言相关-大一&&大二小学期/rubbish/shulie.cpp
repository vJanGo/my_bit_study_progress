#include<stdio.h>
int series(int a,int d)
{
    int sum,s,q;
    int product;
  for( a=0;a<=5;a++)
  {
    for(int d=0;d<=3;d++)
    {
        sum=a+a+d+a+d*2+a+d*3;
        product=a*(a+d)*(a+d*2)*(a+d*3);
        if(sum==26&&product==880){s=a;q=d;}
    }
  }
  printf("%d %d",s,q);
    return 0;
}
int main()
{
    int a=0,a1;
    int b=0;
    int c[4];
    series(a,b);
    
}