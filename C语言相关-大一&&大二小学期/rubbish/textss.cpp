#include<stdio.h>
int* turn(int a[5])
{
 int i=0,j,k,s;
 for(j=0;j<5;j++)
   i++;
 for(j=0;j<i-1;j++)
   for(k=0;k<i-j-1;k++)
   {if(a[k]>a[k+1])
     {
      a[s]=a[k];
      a[k+1]=a[k];
      a[k]=a[s];
  }
   }
   return a;
}
int main ()
{
 int i;int a[5];int *p;
 for(i=0;i<5;i++)
   scanf("%d",&a[i]);
 p=turn(a);
 for(i=0;i<5;i++)
   printf("%d",p[i]);
}