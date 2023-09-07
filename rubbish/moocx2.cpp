#include<stdio.h>
int main()
{
    int n;
    char a;
    scanf("%d,%c",&n,&a);
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            if(i==1)printf("%c",(a+j-1-'a')%26+'a');
            else if(i==n)printf("%c",(a+n-1+n-2+j-'a')%26+'a');
            else if(j==n-i+1)printf("%c",(a+n-1+i-1-'a')%26+'a');
            else if(j<n-i+1)printf(" ");
        }
        printf("\n");
    }
    return 0;
}
/*#include <stdio.h>
int main()
{
    int n;      //行数 
    char c;     //当前字母 
    int i, j;   //循环变量 
    scanf("%d,%c", &n, &c);
    for(i=0; i<n; i++)      //打印第一行 
    {
        printf("%c", c);
        if(c < 'z')
            c++;
        else
            c = 'a';
    }
    printf("\n");
    for(i=1; i<n-1; i++)    //打印中间行 
    {
        for(j=0; j<n-i-1; j++)
        {
            printf(" ");
        } 
        printf("%c\n", c);
        if(c < 'z')
            c++;
        else
            c = 'a';
    }
    for(i=0; i<n; i++)      //打印最后一行 
    {
        printf("%c", c);
        if(c < 'z')
            c++;
        else
            c = 'a';
    }
    printf("\n");
    return 0;
} */