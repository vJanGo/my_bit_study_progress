#include <math.h> 
#include <stdio.h>
int main()
{ float a, b,c,s,area;
 scanf("%f%f%f",&a,&b,&c);
 if((a+b>c)&&(a+c>b)&&(b+c>a))
       {
        s=0.5*(a+c+b);
      area=sqrt(s*(s-a)*(s-b)*(s-c)); 
    }
    else
       area=0;
    if(area!=0)
         printf("a,b,c=%f,%f,%f area=%.2f\n",a,b,c,area);
    return 0;
}