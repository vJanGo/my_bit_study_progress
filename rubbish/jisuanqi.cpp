#include<stdio.h>


int main()
{
    int num=0,num1=0,num2=0;
    int i=0;
    char n[100];
    char op;
    scanf("%s",n);
    for (i = 0; i <=100; i++)
    { 
      if(n[i]=='\0')break;
      if (n[i]>='0'&&n[i]<='9')
      {
        num1*=10;num1+=n[i]-'0';
      }
      if(n[i]=='+'||n[i]=='-'||n[i]=='*'||n[i]=='/'||n[i]=='%')
      {
        op=n[i];
        num=num1;
        num1=num2;
      }
      
    }
    
   // printf("%d %c %d",num,op,num1);
   switch (op)
   {
   case '+':
   printf("%d\n",num+num1);
    break;
    case '-':
   printf("%d\n",num-num1);
    break;
    case '*':
   printf("%d\n",num*num1);
    break;
    case '/':
   printf("%d\n",num/num1);
    break;
    case '%':
   printf("%d\n",num%num1);
    break;
   
   
   }
    return 0;
}
