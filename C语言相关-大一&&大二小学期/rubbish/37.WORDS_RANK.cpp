#include<stdio.h>
#include<string.h>
int main()
{   int i;
    char a[6][20];
    for (i = 0; i <5; i++)
    {
        scanf("%s",a[i]);
    }
    for ( i = 0; i <4; i++)
    {
        for (int j = 0; j <4-i;j++)
        {
            if(strcmp(a[j],a[j+1])<0)
            {
                strcpy(a[5],a[j]);
                strcpy(a[j],a[j+1]);
                strcpy(a[j+1],a[5]);
            }
        }
        
    }
    for ( i = 0; i < 5; i++)
    {
        printf("%s\n",a[i]);
    }
    return 0;
}