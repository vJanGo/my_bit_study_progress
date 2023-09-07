#include <stdio.h>
#include <string.h>
struct ren
{
 char name[15];
 int money;
};//这个结构用来存人名和他对应的钱数，虽然结构比较耗内存，但是好理解~
int main()
{
 int n,i,j,k,m,qian=0,shu=0;
 char name[15];
 struct ren list[10];
 scanf("%d",&n);
 for (i=0;i<n;i++)
 {
  scanf("%s",list[i].name);
  list[i].money=0;
 }//输入人名并把他的钱数初始化为0
 for (i=0;i<n;i++)
 {
  scanf("%s %d %d",name,&qian,&shu);
  if (shu!=0)
  {
    for (k=0;k<n;k++)
    {
 
     if (strcmp(name,list[k].name)==0)
     list[k].money-=(qian/shu)*shu;
    }//把出钱的人的钱刨掉，注意不能直接全刨了，有可能钱除不开，比如说1000分给3个人，其实这个人只给出了999
    
    for (m=0;m<shu;m++)
    {
     scanf("%s",name);
     for (j=0;j<n;j++)
     {
      if (strcmp(name,list[j].name)==0)
      list[j].money+=qian/shu;
     }//收压岁钱的人加钱
     
    }
  }
 }
 for (i=0;i<n;i++)
  printf("%s %d\n",list[i].name,list[i].money);
 return 0;
}

