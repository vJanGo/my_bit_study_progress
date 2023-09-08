#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h> 
int run(int n) 
{    int a;
if(n%400==0)
        a=1;
    else
    {
        if(n%4==0&&n%100!=0)
            a=1;
        else
            a=0;
    }
    return a;
}


int main() 
{ 
   int year, month, day; 
scanf("%d %d %d", &year,&month,&day) ; 
int q=run(year);
 if(month>12||month<1){ 
       printf("month is error.\n") ;return 0; 
  } 
      if((month==1||month==3||month==5||month==7||month==8||month==10||month==12)&&(day>31||day<1)){ 
       printf("day is error.\n");return 0;} 
            if((month==4||month==6||month==9||month==11)&&(day>30||day<1)){ 
      printf("day is error.\n");return 0;} 
        if((month==2&&q==0)&&(day>28||day<1)){ 
     printf("day is error.\n");return 0;} 
            if((month==2&&q==1)&&(day>29||day<1)){ 
     printf("day is error.\n");return 0;} 
        if (month == 1 || month == 2) 
          year--, month += 12; 
       int c = year / 100; 
        int y = year - c * 100; 
        int week = y + y / 4 + c / 4 - 2 * c + 26 * (month + 1) / 10 + day - 1; 
       
        while (week < 0) 
            week += 7; 
     week %= 7; 
   
       
       switch (week) 
      { 
      case 1:printf("1\n"); break; 
       case 2:printf("2\n"); break; 
       case 3:printf("3\n"); break; 
       case 4:printf("4\n"); break; 
       case 5:printf("5\n"); break; 
       case 6:printf("6\n"); break; 
       case 0:printf("7\n"); break; 
       } 

    return 0; 
}