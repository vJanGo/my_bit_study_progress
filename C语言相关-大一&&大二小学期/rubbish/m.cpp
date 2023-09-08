#include<stdio.h>
int main()
{
    float a,b,c,d;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    float len=0.00;
    float mid=(d-a)*0.5;
    if((mid+a>=c)&&(mid+a<=b))len=mid*1.00;
    else if(mid+a<c){len=d-c;}
    else {len=b-a;}
    printf("%.2f",len);
}