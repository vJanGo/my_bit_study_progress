#include<stdio.h>
int main()
{
  char str[100];
  int max=0,min=0;
  char op;
  int num;
  scanf("%s",str);
  min=str[0]-'0';
  for (int i = 0; i <100; i++)
  { 
    if(str[i]=='\0')break;
    if (str[i]>='0'&&str[i]<='9')
    {
       num=str[i]-'0';
       max=max>num?max:num;
       min=min<num?min:num;
    }
    if (str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/'||str[i]=='%')
    {
        op=str[i];
    }
  }
  if((op=='/'&&min==0)||(op=='%'&&min==0))printf("Error!\n");
  else
  {
    switch (op)
    {
    case '+':
        printf("%d%c%d=%d\n",max,op,min,max+min);
        break;
        case '-':
        printf("%d%c%d=%d\n",max,op,min,max-min);
        break;
        case '*':
        printf("%d%c%d=%d\n",max,op,min,max*min);
        break;
        case '/':
        printf("%d%c%d=%d\n",max,op,min,max/min);
        break;
        case '%':
        printf("%d%c%d=%d\n",max,op,min,max%min);
        break;
    }
  }
  return 0;
}