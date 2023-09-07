#include<stdio.h>
int main()
{
    int b,h;
    scanf("%d%d",&b,&h);
    int hlast;//第一行最后一个
    int i,j;
    hlast=(b+h-1)%10;
    int llast;//最后一个数
    llast=(hlast+h-1)%10;
    for(i=0;i<h;i++)
    {
        for(j=0;j<h-i;j++)
        {
            if(i==0)printf("%d",(b+j)%10);
            else if(j==0)printf("%d",(llast+h-i-1)%10);
            else if(j==h-i-1)printf("%d",(hlast+i)%10);
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}