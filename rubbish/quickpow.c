#include<stdio.h>
int quickpow(int a,int b,int p)
{int res=1;
    while(b)
    {
        if (b&1)
        {
            res=(res*a)%p;
        }
        a=(a*a)%p;
        b>>=1;
    }
    return res;
}
int main()
{   int a,b,res;
    scanf("%d%d",&a,&b);
    int p=1000;
    res=quickpow(a,b,p);
    if(res!=0)printf("The last 3 numbers is %d.\n",res);
    else printf("The last 3 numbers is %03d.\n",res);
      system("pause");
    return 0;
  
}