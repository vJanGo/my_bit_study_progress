#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(void)
{srand((unsigned int)time(NULL));
int red[6]={0};//����6��1~33
int  blue[1]={0};//����1��1~16
int i=0,j=0;
int value;
int flag=0;
int n1,n2,n3,n4,n5,n6,n7;
int str[7]={0};
int num=0,num1=0,c,price,a=0,d;
printf("��ӭ����˫ɫ��\n");
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
	 
     printf("������ĺ�ɫ����루��1~33��\n");
     for(i=0;i<6;i++) 
     {
     scanf("%d",&str[i]);
     }
	 for(i=0;i<6;i++)
	 {if(str[i]>33){
	 printf("\033[31m�������벻�ڷ�Χ�ڵ�����\n\033[0m");
	 a=1;}
	 }
	 printf("���������ɫ����루��1~16��\n");
	 scanf("%dn",&d);
	 if(a==0){
	 printf("\033[31m�����ɹ���\n\033[0m");
     printf("��ɫ��ĺ�����:\n");
	 for(i=0;i<6;i++)
	 {
	 printf("\033[31m%d\033[0m ",red[i]);
     }
     printf("\n");
     printf("��ɫ��ĺ�����:\n");
     c=rand()%16+1;
     printf("\033[34m%d\n\033[0m",c);
     for(i=0;i<6;i++)
	 {
     for(j=0;j<6;j++)
     {if(str[i]==red[j])num+=1;
	 }
     }
	 if(d==c)num1+=1;
	 printf("\033[35m��¶���%d������ %d������\n\033[0m",num,num1);
	 printf("----------------------------------\n");
	 if(num==1&&num1==0)printf("���ź�����û�л�\033[31m�������������������һ��(*^_^*)��\n\033[0m");
	 if(num==0&&num1==0)printf("���ź�����û�л�\033[31m�������������������һ��(*^_^*)��\n\033[0m");
	 if(num==2&&num1==0)printf("���ź�����û�л�\033[31m�������������������һ��(*^_^*)��\n\033[0m");
	 if(num==3&&num1==0)printf("���ź�����û�л�\033[31m�������������������һ��(*^_^*)��\n\033[0m");
     if(num==0&&num1==1)printf("��ϲ�㣡������\033[31m���Ƚ�\n\033[0m");
     if(num==1&&num1==1)printf("��ϲ�㣡������\033[31m���Ƚ�\n\033[0m");
     if(num==2&&num1==1)printf("��ϲ�㣡������\033[31m���Ƚ�\n\033[0m");
     if(num==3&&num1==1)printf("��ϲ�㣡������\033[31m��Ƚ�\n\033[0m");
     if(num==4&&num1==0)printf("��ϲ�㣡������\033[31m��Ƚ�\n\033[0m");
     if(num==4&&num1==1)printf("��ϲ�㣡����������������������������\033[31m�ĵȽ�\n\033[0m");
     if(num==5&&num1==0)printf("��ϲ�㣡����������������������������\033[31m�ĵȽ�\n\033[0m");
     if(num==5&&num1==1)printf("��ϲ�㣡����������������������������\033[31m���Ƚ�\n\033[0m");
     if(num==6&&num1==0)printf("��ϲ�㣡����������������������������\033[31m���Ƚ�\n\033[0m");
     if(num==6&&num1==1)printf("��ϲ�㣡����������������������������\033[31mһ�Ƚ�\n\033[0m");
     }
     if(a==1) printf("\033[31m����ʧ�� ����������\n\033[0m");
  system("pause");
  return 0;
}
