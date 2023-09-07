#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(void)
{srand((unsigned int)time(NULL));
int red[6]={0};//红球6个1~33
int  blue[1]={0};//蓝球1个1~16
int i=0,j=0;
int value;
int flag=0;
int n1,n2,n3,n4,n5,n6,n7;
int str[7]={0};
int num=0,num1=0,c,price,a=0,d;
printf("欢迎来玩双色球！\n");
printf("------------------\n");




 	for(i=0;i<6;i++)
 	
	 {
	 value=rand()%32+1;
	  for(j=0;j<flag;j++)
	  {
	  	if(value==red[j])
		  {
		  i--;
		  break;
		  }
	  }
	  if(j==flag)
	  {
	  	red[flag]=value;
	  	flag++;
	  }
	  	
	  

	 }
	 
     printf("输入你的红色球号码（红1~33）\n");
     for(i=0;i<6;i++) 
     {
     scanf("%d",&str[i]);
     }
	 for(i=0;i<6;i++)
	 {if(str[i]>33){
	 printf("\033[31m请勿输入不在范围内的数字\n\033[0m");
	 a=1;}
	 }
	 printf("输入你的蓝色球号码（蓝1~16）\n");
	 scanf("%dn",&d);
	 if(a==0){
	 printf("\033[31m开奖成功！\n\033[0m");
     printf("红色球的号码是:\n");
	 for(i=0;i<6;i++)
	 {
	 printf("\033[31m%d\033[0m ",red[i]);
     }
     printf("\n");
     printf("蓝色球的号码是:\n");
     c=rand()%16+1;
     printf("\033[34m%d\n\033[0m",c);
     for(i=0;i<6;i++)
	 {
     for(j=0;j<6;j++)
     {if(str[i]==red[j])num+=1;
	 }
     }
	 if(d==c)num1+=1;
	 printf("\033[35m你猜对了%d个红球 %d个蓝球\n\033[0m",num,num1);
	 printf("----------------------------------\n");
	 if(num==1&&num1==0)printf("很遗憾，你没有获奖\033[31m（你可以重启程序再来一次(*^_^*)）\n\033[0m");
	 if(num==0&&num1==0)printf("很遗憾，你没有获奖\033[31m（你可以重启程序再来一次(*^_^*)）\n\033[0m");
	 if(num==2&&num1==0)printf("很遗憾，你没有获奖\033[31m（你可以重启程序再来一次(*^_^*)）\n\033[0m");
	 if(num==3&&num1==0)printf("很遗憾，你没有获奖\033[31m（你可以重启程序再来一次(*^_^*)）\n\033[0m");
     if(num==0&&num1==1)printf("恭喜你！你获得了\033[31m六等奖\n\033[0m");
     if(num==1&&num1==1)printf("恭喜你！你获得了\033[31m六等奖\n\033[0m");
     if(num==2&&num1==1)printf("恭喜你！你获得了\033[31m六等奖\n\033[0m");
     if(num==3&&num1==1)printf("恭喜你！你获得了\033[31m五等奖\n\033[0m");
     if(num==4&&num1==0)printf("恭喜你！你获得了\033[31m五等奖\n\033[0m");
     if(num==4&&num1==1)printf("恭喜你！！！！！！！！！！！！你获得了\033[31m四等奖\n\033[0m");
     if(num==5&&num1==0)printf("恭喜你！！！！！！！！！！！！你获得了\033[31m四等奖\n\033[0m");
     if(num==5&&num1==1)printf("恭喜你！！！！！！！！！！！！你获得了\033[31m三等奖\n\033[0m");
     if(num==6&&num1==0)printf("恭喜你！！！！！！！！！！！！你获得了\033[31m二等奖\n\033[0m");
     if(num==6&&num1==1)printf("恭喜你！！！！！！！！！！！！你获得了\033[31m一等奖\n\033[0m");
     }
     if(a==1) printf("\033[31m开奖失败 请重新输入\n\033[0m");
  system("pause");
  return 0;
}
