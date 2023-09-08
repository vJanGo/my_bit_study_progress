#include<stdio.h>
int main()
{   int num,max=0;
    int n;
    scanf("%d",&n);
    for (int i = n; i >0; i--)
    {   num=0;
    
        for(int j = i-1; j>1; j--)
        {
            if (i%j==0)
        {  num=1;
           j=0;
        }
        }
        if(num==0){max=max>i?max:i;}
    }
    printf("The max prime number is %d.\n",max);
}