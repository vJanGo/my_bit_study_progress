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
	printf("��������ҪͶƱ�ĺ�ѡ��\n");
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
printf("                ��ӭ����ͶƱϵͳ\n");
printf("------------------------------------------------------------\n");
printf("          1.¼��ͶƱ����Ϣ||2.��ʼͶƱ\n");
printf("------------------------------------------------------------\n");
printf("������ѡ��\n");
int n;
int N;
scanf("%d",&n);
if(n==1)
{printf("������¼������\n");
scanf("%d",&N);
getin(N);}
if(n==2)
{
if(N==0)printf("��������1\n");
else 
{int n2;
 printf("������ͶƱ����\n");
 scanf("%d",&n2);
getout(n2,N);}
if(n!=1&&n!=2)printf("������1��2\n"); 
	return 0;
} 
