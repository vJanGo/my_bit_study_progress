#include<stdio.h>  
#include<string.h>
int judge(char *str)
{
int lenth=strlen(str);
for(int i=1;i<strlen(str);i++)
{
    if(*str!=*(str+lenth-i))return 0;
    else {str++;lenth--;}
}
return 1;
}

 
int main(){  
    char str[1000000];  
    gets(str);  
    if(judge(str)) printf("%s\n","true");  
    else printf("%s\n","false");  
}  
  
