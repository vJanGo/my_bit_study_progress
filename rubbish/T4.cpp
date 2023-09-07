#include<stdio.h>
#include<string.h>
/*一个较为麻烦的解题方式*/
char a[100];//存储数组
int w=0;//定义循环次数，防止每次函数执行完置零
void convert(int n,char* a)//定义函数，传入括号位置和数组
{
char p[100];//存储该数组用于倒置
for (int i = 0; i <= strlen(a)-1; i++)
{
   p[i]=a[i];
}//.../
int count=1;
int flag=0;//退出循环的指示
for (int i = strlen(a)-1; i >n; i--)
{
if(a[i]==')'||a[i]=='(')//遍历到括号就把它变成*，从该位置到传入的括号位置倒置
{
    a[i]='*';
    for (int j = n+1; j <i; j++)
    {
    a[j]=p[i-count++];
    }
    flag=1;
}
if(flag==1)break;
}
}
int main()
{
scanf("%s",a);
char *p=a;//接收数组
for (; w <strlen(p); w++)
{
  if(p[w]=='('||p[w]==')')
  {
    p[w]='*';
    convert(w,p);
   
  }else if(p[w]!='*'){printf("%c",p[w]);}
}
return 0;
}