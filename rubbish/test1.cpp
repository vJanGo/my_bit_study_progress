#include <stdio.h>  
void PrintChar(int number,char c){  
    int i;  
    for ( i=0 ; i< number; i++)  
        printf("%c",c);  
}  
  
// 递归函数-----------需要补全  
char RecursionFunction(int n, char c);  
  
int main(){  
    char c; int n;  
    scanf("%d %c",&n,&c);  
    RecursionFunction(n,c);  
    return 0;  
}  

char RecursionFunction(int n, char c)
{
	if(n>0&&c=='#')
	{
	PrintChar(n,c);
	RecursionFunction(n-1,'*');
	}
	else if(n>0&&c=='*')
	{
	PrintChar(n,c);
	RecursionFunction(n+1,'?');	
	}
	else if(n>0&&c=='?')
	{
	PrintChar(n,c);
	RecursionFunction(n+3,'+');		
	}
	else if(n>0&&c=='+')
	{
	PrintChar(n,c);
	RecursionFunction(n-6,'#');		
	}
	else
	{
		printf("\n");
		printf("RecursionFunction has been over !\n");
	}
 }