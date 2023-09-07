#include<stdio.h>
int main()
{   int n[9],count=0;
    int max=0;
    for(int i=0;i<10;i++){
    scanf("%d",&n[i]);
    max=max>n[i]?max:n[i];}
    for(int i=0;i<10;i++)
    if(max==n[i])printf("%d\n",i+1);
}