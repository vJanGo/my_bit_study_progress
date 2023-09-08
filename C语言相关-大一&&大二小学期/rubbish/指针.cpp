#include<stdio.h>
#include<string.h>
void getin(int num)
{
	char name[num][10];
	for(int i=0;i<num;i++)
	{
		gets(name[i]);
	}
	
}
void getout(int num2,int num3)
{
	char k[10];
	printf("请输入你要投票的候选人\n");
	for(int i=0;i<num2;i++)
	{
		gets(k);
		for(int j=0;j<num3;j++)
		{
			if(strcmp(name[j]),k==0)
			{
				b[j]++;
				break;
			}
		}
	}
}
int main()
{ printf("------------------------------------------------------------\n");
printf("                欢迎来到投票系统\n");
printf("------------------------------------------------------------\n");
printf("          1.录入投票人信息||2.开始投票\n");
printf("------------------------------------------------------------\n");
printf("请输入选项\n");
int n;
int N;
scanf("%d",&n);
if(n==1)
{printf("请输入录入人数\n");
scanf("%d",&N);
getin(N);}
if(n==2)
{
if(N==0)printf("请先输入1\n");
else 
{int n2;
 printf("请输入投票人数\n");
 scanf("%d",&n2);
getout(n2,N);}
if(n!=1&&n!=2)printf("请输入1或2\n"); 
	return 0;
} 
