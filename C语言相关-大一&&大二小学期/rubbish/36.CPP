#include<stdio.h>
#include<string.h>
int main()
{
    char s[100]={'\0'};
    char t[100]={'\0'};
    char u[100]={'\0'};
    int num=0;
    int z=0;
    scanf("%s",&s);
    scanf("%s",&t);
    for(int i=0;s[i]!='\0';i++)
    {   num=0;
        for (int j = 0;t[i]!='\0'; j++)
        {
        if(s[i]==t[j])num++;
        }
        if(num==0)u[z++]=s[i];
    }
    printf("%s\n",u);
    return 0;
}