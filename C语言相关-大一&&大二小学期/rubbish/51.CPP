#include<stdio.h>
int a[100];
int main()
{   int n,count=0;
    int max1,max2;
    scanf("%d",&n);
    for (int i = 0; i <n; i++)
    {
    scanf("%d",&a[i]);
    }
    int left=0,right=0;
    while (left<n)
    {
        if(a[right]==a[left])
        {
        if((right-left)>count)
        {
        count=right-left;
        max1=left;
        max2=right;
        }
        right++;
        }
        else
        {
        left=right;
        if(left==n-1)break;
        right++;
        }
    }
    if(!count){printf("No equal number list.\n");}
    else printf("The longest equal number list is from %d to %d.\n",max1,max2);
}