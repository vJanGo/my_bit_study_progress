#include<stdio.h>
int if_run(int n)
{
    if (n%400==0)return 1;
    else if (n%4==0&&n%100!=0)
    {
    return 1;
    }
    else return 0;
}
int main()
{   int arr[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };//月份数组
    int year,month,day;
    int count;
    int  i ;
    scanf("%d%d%d",&year,&month,&day);
    scanf("%d",&count);
    int a;//将该年展开
    int s;//是否为闰年
    s=if_run(year);
    switch (month)
    {
    case 1:
        a=day;
        break;
     case 2:
        a=day+31;
        break;
         case 3:
        a=day+31+28;
        break;
         case 4:
        a=day+31+28+31;
        break; 
        case 5:
        a=day+31+28+31+30;
        break; case 6:
        a=day+31+28+31+30+31;
        break; case 7:
        a=day+31+28+31+30+31+30;
        break; case 8:
        a=day+31+28+31+30+31+30+31;
        break; case 9:
        a=day+31+28+31+30+31+30+31+31;
        break; case 10:
        a=day+31+28+31+30+31+30+31+31+30;
        break; case 11:
        a=day+31+28+31+30+31+30+31+31+30+31;
        break; case 12:
        a=day+31+28+31+30+31+30+31+31+30+31+30;
        break;
    }
    if(s==1&&month>2)a+=1;
    int num;
    int day2=0;
    int day1;
    num=a+count;
    while (num>366&&s==1)
    {
        num-=366;
        year++;
    }
    while (num>365&&s==0)
    {
        num-=365;
        year++;
    }
    day1=num;
    month=1;
    if(s==1){num--;}
    for (  i = 0; day1>arr[i]; i++)
    {
        day2+=arr[i];
        day1=num;
        if (num>=day2)
        {
          month++;
        }
        day1-=day2;
    }
    month--;
    
    printf("%d.%d.%d\n",year,month,day1);
}