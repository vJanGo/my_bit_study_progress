#include<stdio.h>
int main()
{
    int n;
    int m;
    scanf("%d",&n);
    int arr[20];
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    if(n%2==0)m=n/2;
    else 
    m=n/2+1;
    for(int i=0;i<m;i++)
    {
    if(n%2!=0&&i==n/2) printf("%d ",arr[i]);
    else printf("%d ",arr[i]*arr[n-1-i]);
    }
    printf("\n");
    
}