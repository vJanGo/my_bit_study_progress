#include<stdio.h>
int main()
{
    int a[6];
    scanf("%d%d",&a[0],&a[1]);
    scanf("%d%d",&a[2],&a[3]);
    scanf("%d%d",&a[4],&a[5]);
    for (int  i = 0; i < 6; i++)
    {
        if(i==0||i==2||i==4)
        {
            if (a[i]==1)printf("The Centigrade is %.2f\n",5*(a[i+1]- 32)/9.00);
            else printf("The Fahrenheit is %.2f\n", 9*a[i+1]/5.00+32);
        }
    }
    return 0;
}