#include<stdio.h>

int main()
{
    int i=0;
    int a[100];

while (1)
{
  scanf("%d",&a[i]);
  i++;
  if(a[i-1]==0)break;
}
for (int j = 0; j <= i-1; j+=2)
{   
    if(a[j]==0)break;
    if(a[j]/1000>0&&a[j+1]/1000>0&&a[j]<a[j+1])
    {
        int min=a[j];
        int max=a[j+1];
        int counter=0;
       for (int  i = min;i>=min&& i <=max; i++)
    {
    int n1=i%10;
    int n2=(i%100-n1)/10;
    int n3=(i%1000-i%100)/100;
    int n4=i/1000;
    if(n1!=n2&&n1!=n3&&n1!=n4&&n2!=n3&&n2!=n4&&n3!=n4&&i%2==0)
    {
        printf("%d ",i);
        counter++;
    }
    }
  
  printf("counter=%d\n",counter);
  printf("\n");
    }
    else printf("Error\n");
}

    return 0;
}