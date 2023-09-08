#include<stdio.h>
#include<string.h>
int a[100];
int b[100];
int count=0;
int* convert(int num,int n)
{  int count=0;
    while(num)
    {
        a[count++]=num%n;
        num=num/n;
    }
    return a;
}
int* convert2(int num,int n)
{  int count=0;
    while(num)
    {
        b[count++]=num%n;
        num=num/n;
    }
    return b;
}
int main()
{
    char a,b;
    int num1=0;
    int num2=0;
    int i;
    do{                  
    a=getchar();            
    if(a >= 48 && a<= 57){
    num1 = 10*num1 + a-48;                
    }else if(32==a){
    break;                
    }else if(a>=65&&a<=70){
    num1 = 10*num1 + a-65+11; 
    }           
    }while(1);    
    do
    {b=getchar();            
    if(b >= 48 && b<= 57){
    num2 = 10*num2 + b-48;                
    }else if(10==b){
    break;                
    }else if(b>=65&&b<=70){
    num2 = 10*num2 +b-65+11; 
    }                 
    }while(1);                                      
    int* p;
    int* q;
    int flag1=1000;
    int flag2=1000;
    int flag=1;
    int flagg=0;
   p=convert(num1,2);
    q=convert2(num2,6);
    for ( i = 0; i < 30; i++)
    {
       printf("%d",*p++);
    }
    printf("\n");
      for ( i = 0; i < 30; i++)
    {
       printf("%d",*q++);
    } 
   /* for ( i = 2; i <=36; i++)
    {p=convert(num1,i);
       for (int j = 2; j <36; j++)
       {flag=1;
       q=convert2(num2,j);
       for (int z = 0; z<30;z++)
       {
        if(p[z]!=q[z]){
        flag=0;break;
        }
       }
       if(flag){flag1=flag1<i?flag1:i;flag2=flag2<j?flag2:j;flagg=1;}
       }
       
    }
    if(flagg){
        printf("%d (base %d) = %d (base %d)\n",num1,flag1,num2,flag2);
    }else printf("%d is not equal to %d in any base 2..36\n",num1,num2);
   
   */
    return 0;
}