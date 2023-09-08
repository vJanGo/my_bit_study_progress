#include <stdio.h>  
#define size 10000  
int i,j;  
int sum[size];  
int* b;  
int* sum1(int num,int a[size])  
{
    for(i=0;i<num;i++)  
    {  
        for(j=0;j<=i;j++)  
        {  
            sum[i]+=a[j];  
        }  
    }  
    return sum;  
}
int max(int num,int a[size])
{ int max=0;
  b = sum1(num,a);
 for(i=0;i<num;i++)
 {
  max=max>b[i]?max:b[i];
 }
 return max;
}
int main()  
{
    int numwhile;  
    int num;
    int a[size];  
    int c;
    scanf("%d",&numwhile);  
    while (numwhile--)
    {
       scanf("%d",&num);
        for ( j = 0; j <num; j++)  
        {  
         scanf("%d",&a[j]);  
        }  
        c=max(num,a);
    printf("%d",c);
    printf("\n");
    }
    

    
    return 0;  
}
