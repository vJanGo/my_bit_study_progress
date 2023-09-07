#include<stdio.h>  
int main()  
{  
    int h;  
    int n;  
   int s;  
   char a;
    int num;  
    scanf("%c%d",&a,&h);  
    int lenth=2*h-1;  
    for (int i = 1; i <=lenth; i++)  
    {  num=h;  
    if(i>h) s=2*h-i;  
          if(i<=h)s=i;  
        for (int  j =1; j <=h+s-1; j++)  
        {   
        if (j==h+1-s||j==h+s-1){  
             printf("%c",a);    
        }  
        else  
        {  
            printf(" ");  
        }  
        }  
        printf("\n");  
        if(i>=h)a--; 
        else a++;
    }  
      return 0;
} 