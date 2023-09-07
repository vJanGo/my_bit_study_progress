#include<stdio.h>
int main()
{
    char s,s1;
    int n;
    scanf("%d %c",&n,&s);
    int lenth=2*n-1;
    int h;
    for (int i = 0; i <lenth; i++)
    {   if(i<n)h=n+i;
        else h=lenth-(i-n)-1;
        for (int j = 0; j<h; j++)
        {
            if(j==lenth-h)printf("%c",(s+i-'A')%26+65);
            else if(j==h-1)printf("%c",(s+lenth-1+lenth-i-1-'A')%26+65);
            else printf(" ");
        }
        printf("\n");
    }
    
}