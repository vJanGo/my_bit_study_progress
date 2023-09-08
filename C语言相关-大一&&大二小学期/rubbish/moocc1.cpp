#include<stdio.h>
int main()
{
    int n;
    char a,b;
    scanf("%d %c",&n,&a);
    int lenth=n*2-1;
    for (int i = 1; i <=n; i++)
    {  
        for (int j = 1; j <=lenth-n+i; j++)
        {
        if(j<=n-i)printf(" ");
        else if(j>n-i&&j<=n){
            if(j==n)b=a;
            printf("%c",a);
            a++;
            if(a>90)a='A';
        }
        else
        {
            b--;
            if(b<65)b='Z';
            printf("%c",b);
        }
    }
    printf("\n");
    if(b=='Z')a='A';
    else a=b+1;
    }
    return 0;
}