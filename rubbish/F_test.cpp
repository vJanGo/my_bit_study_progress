#include<stdio.h>
int main()
{
   char a;
   int n;
   scanf("%d %c",&n,&a);
   if(a>='a'&&a<='z')a-=32;
   if(n%2==0||a<'A'||a>'z'||(a>'Z'&&a<'a')){printf("input error!\n");return 0;}
   for (int i = 1; i <=n; i++)
   {
   for (int j = 1; j <=n; j++)
   {
   if(i==1)printf("%c",(a+j-1-'A')%26+'A');
   else if(i==n)printf("%c",(a+n-1+j-1-'A')%26+'A');
   else if(j==1||j==n||j==(n+1)/2)printf("%c",(a-'A'+j-1+i-1)%26+'A'); 
   else printf(" ");
   }
   printf("\n");
   }
   return 0;
}