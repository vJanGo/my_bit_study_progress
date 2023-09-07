#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000],b[1000],c[1000],t[1000],*pt;
    scanf("%s%s%s",a,b,c);
    int len=strlen(b);
    while(pt=strstr(a,b))
    {
        strcpy(t,pt+len);
        strcpy(pt,c);
        strcat(a,t);
    }
    printf("%s\n",a);
    return 0;
}