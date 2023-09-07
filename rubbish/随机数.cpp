#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{int red[6]={0};//红球6个1~33
int  blue[1]={0};//蓝球1个1~16
int i=0,j=0;
int value;
int flag=0;
printf("欢迎来玩双色球！\n");
printf("------------------\n");
printf("按下回车启动");

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
	 printf("红色球的号码是：\n");
	 for(i=0;i<6;i++) 
	 {
	 printf("%d ",red[i]);
}


  return 0;
}