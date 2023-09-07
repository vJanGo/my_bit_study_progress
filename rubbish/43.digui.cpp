#include<stdio.h>
float sum1=0;
float sum(float n)
{   float count;
    if(n==1)return sum1+1;
    else if((int)n%2!=0)count=-1/n;
    else if((int)n%2==0)count=1/n;
    sum1=count+sum(n-1);

}
int main()
{
    float n;
    scanf("%f",&n);
    if(n==1)printf("1\n");
    else printf("%.6f\n",sum(n));
    return 0;
}