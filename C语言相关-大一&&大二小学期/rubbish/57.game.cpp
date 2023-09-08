#include<stdio.h>
int main()
{
    int count;
    int n;
    scanf("%d",&count);
    while (count--)
    {
        scanf("%d",&n);
        if(n==1)printf("0\n");
        else if(n%2==0)printf("%d\n",n-1);
        else printf("%d\n",n);
        
    }
    
}