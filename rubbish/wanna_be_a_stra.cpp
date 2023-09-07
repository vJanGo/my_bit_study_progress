#include<stdio.h>
int main()
{
    int a[10];
    int i=0;
    int max=0;
    int min;
    int sum=0;
    while (scanf("%d",&a[i])!=EOF)
    {
      i++;
      if(i>=10){
          break;
      }
    }
    min=a[0];
   for (i=0; i<10; i++)
   {
    max=max>a[i]?max:a[i];
    min=min<a[i]?min:a[i];
    sum+=a[i];
   }
   int average=0;
   average=(sum-max-min)/8;
   printf("Canceled Max Score:%d\n",max);
   printf("Canceled Min Score:%d\n",min);
   printf("Average Score:%d\n",average);
    return 0;
}
