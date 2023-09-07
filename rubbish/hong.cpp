#define f(x,y) (x>y?x:y)
#include<stdio.h>
int main()
{
    int a,b,c;
    a=2;
    b=5;
    c=4+f(a,b);
    printf("%d",c);
}