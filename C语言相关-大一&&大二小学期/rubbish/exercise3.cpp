#include<stdio.h>
int main()
{
    int s=0;
    int n;
    char q;
    scanf("%d %c",&n,&q);
    s=n-1;
    int i=3;
    while(s>=i*2)
    {
    s=s-i*2;
    i+=2;
    }
    i-=2;
    int m=i;
    int b=0;
for (int a = 1; a <=i; a++)
{  b=a;
   for (int j = 1; j <=i-b+1; j++)
   {
   if(b>i/2+1)b=i+1-b;
   if(j>b-1&&j<=i-b+1)printf("%c",q);
   else printf(" ");
   }
   printf("\n");
   
}
printf("%d\n",s);
return 0;
}