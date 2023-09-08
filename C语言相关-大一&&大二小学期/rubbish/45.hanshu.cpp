#include <stdio.h>  
int f(int n)
{
if(n>=0&&n<=4)return 1;
else if(n>4&&n%2==0)return f(n-1)+f(n-3);
else if(n>4&&n%2!=0)return f(n-2)+f(n-4);
else return -1;
}
int main()  
{  int n,s, f( int );  
   scanf("%d", &n);  
   s = f(n);  
   printf("%d\n", s);  
   return 0;  
}  