#include<stdio.h>
/* a5=(n/10000)%10;	//万位数字
    a4=(n/1000)%10;	//千位数字
    a3=(n/100)%10;	//百位数字
    a2=(n/10)%10;		//十位数字
    a1=(n/1)%10;		//个位数字*/
int sub1(int n)
{
return (n/10000)%10*100+(n/1000)%10*10+(n/100)%10;
}
int sub2(int n)
{
return (n/1000)%10*100+(n/100)%10*10+(n/10)%10;
}
int sub3(int n)
{
return (n/100)%10*100+(n/10)%10*10+(n/1)%10;
}
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=10000;i<=30000;i++)
    {
        if(sub1(i)%n==0&&sub2(i)%n==0&&sub3(i)%n==0)printf("%d\n",i);
    }
    return 0;
}