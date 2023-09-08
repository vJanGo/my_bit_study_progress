
#include <stdio.h>  
struct nn  
{  int no;     
   int num;     
};  
  
typedef struct nn DATA;  
  
int number( char *str , DATA a[])
{   int p=0,j=0;
    int num[1000];
    while (str[p]!='\0')
    {
    num[p]=str[p]-'0';  
    a[p].num=num[p];
    p++;
    }
    int tmp;
    int tmpn;
    for ( int i = 0; i <p-1; i++)
    {
        for ( j = 0; j <p-i-1; j++)
        {
        if(a[j].num>a[j+1].num)
        tmp=a[j+1].num;
        tmpn=a[j+1].no;
        a[j+1].num=a[j].num;
        a[j+1].no=a[j].no;
        a[j].num=tmp;
        a[j].no=tmpn;
        }
    }
    return p;
    
}
  
int main( )  
{     
   DATA b[100];    
   char sa[500];    
   int i, n;    
   gets( sa );   
   n = number( sa, b );   
   for ( i=0; i<n; i++ )   
       printf("%d %d\n", b[i].num, b[i].no );   
   return 0;  
}  
 