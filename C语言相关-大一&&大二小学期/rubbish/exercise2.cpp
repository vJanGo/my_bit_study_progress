#include<stdio.h>
#include<string.h>
int main()
{
    char ch[1000];
    scanf("%s",&ch);
    int N[10]={0};
    for(int i=0;i<strlen(ch);i++)
    {
        N[ch[i]-'0']++;
    }
    for(int i=0;i<10;i++)
    {
        if(N[i]!=0)
        {
            printf("%d:%d\n",i,N[i]);
        }
    }
}
