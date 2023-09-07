#include<stdio.h>
 int n;
int tao(int day)
{int num;
 if(day==n)
 
    return 1;
 
 else 
 
    return 2*(tao(day+1)+day);
 

}
int main()
{  
    int count;
    scanf("%d",&n);
    count=tao(1);
    if(count>1) printf("The monkey got %d peaches in first day.\n",count);
    else printf("The monkey got 1 peach in first day.\n");
    return 0;
}