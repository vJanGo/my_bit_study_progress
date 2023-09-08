/*#include<stdio.h>
int h(int n,int x)
{
    if(n==0)return 1;
    else if(n==1)return 2*n;
    else return 2*x*h(n-1,x)-2*(n-1)*h(n-2,x);
}
int main()
{
    int n,x;
    scanf("%d%d",&n,&x);
    printf("%d\n",h(n,x));
    return 0;
}*/
#include<stdio.h>   
int main()   
{   
    int n,m=1;   
    scanf("%d",&n);   
    for (int i = 0; i < n; i++)   
    {   
        m*=3;   
    }   
       
    printf("%d\n",m-1);   
    return 0;   
}  