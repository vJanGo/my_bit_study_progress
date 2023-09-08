#include<stdio.h>
char dilei[100][100];
char result[100][100];
void check(char dilei[100][100],int n,int m)
{
for (int i = 0; i <n; i++)
{
    for (int j = 0; j <m; j++)
    {
        
    }
}

}
int main()
{
   int n,m,i,j,count=0;
   while ((scanf("%d%d",&n,&m),n)!=0)
{   count++;
    for(i=0;i<n;i++)
    scanf("%s",dilei[i]);
    check(dilei,n,m);
    printf("Field #%d:\n",count);
    for(i=0;i<n;i++)
    {
    for(j=0;j<m;j++)
    {printf("%c",result[i][j]);
    printf("\n");
    }
    printf("\n");
    }
    printf("\n");
}

}