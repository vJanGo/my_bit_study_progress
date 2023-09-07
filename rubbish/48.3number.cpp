#include<stdio.h>
int count=0;
void check(int n,int f,int j,int w)
{
int n2=2*n;
int n3=3*n;
int flag=0;
int i=3,tmp;
int tmp1[3];
while(i)
{
    tmp=n2%10;
    tmp1[i]=tmp;
    if(tmp==f||tmp==j||tmp==w||tmp==0)flag++;
    n2/=10;
    i--;
}
i=3;
while(i)
{
    tmp=n3%10;
    if(tmp==f||tmp==j||tmp==w||tmp==tmp1[0]||tmp==tmp1[1]||tmp==tmp1[2]||tmp==0)flag++;
    n3/=10;
    i--;
}
if(flag==0&&n*2<1000&n*3<1000){printf("%d,%d,%d\n",n,2*n,3*n);count++;}
}
int main()
{
 int first;
 int num;
 scanf("%d",&first);

    for ( int j = 1; j<= 9; j++)
    {
     for (int w = 1; w <= 9; w++)
     {  if(first!=j&&first!=w&&j!=w){
        num=100*first+10*j+w;
        check(num,first,j,w);
        }
     }
     
    }
    if(!count)printf("0,0,0\n");
    return 0;
}