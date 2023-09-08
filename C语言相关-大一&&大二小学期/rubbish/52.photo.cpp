#include<stdio.h>
int main()
{
    char c;
    int n;
    scanf("%d %c",&n,&c);
    for (int i = 1; i <=n; i++)
    {
    for (int j = 1; j <=2*n-1; j++)
    {
    if(j==1&&i==1)printf("%c ",c);
    else if(j==2*n-1&&i==1)printf("%c",c);
    else if(i==n&&j>=1&&j<=n)printf("%c ",(c+n-1+n-j-'A')%26+'A');
    else if(i==n&&j>n&&j<2*n-1)printf("%c ",(c+n-1+j-n-'A')%26+'A');
    else if(j==1)printf("%c ",(c+n-1+n-2+n+1-i-'A')%26+'A');
    else if(j==2*n-1)printf("%c",(c+n-1+n-2+n+1-i-'A')%26+'A');
    else if(j==i||j==2*n-i)printf("%c ",(c+i-1-'A')%26+'A');
    else printf("  ");
    }
    printf("\n");
    }
    
}