#include<stdio.h>
#include <stdlib.h>  
#include<string.h>
void reverse(char *str,int start,int end )
{ if(end>strlen(str))end=strlen(str)-1;
  if(end-start>0){
        char tmp = str[start];
        str[start] = str[end];
        str[end] = tmp;
        return reverse(str, start + 1, end - 1);
 }
}  
int main( )  
{   char str[100];  
    int start, end;  
    gets(str);  
    scanf("%d%d", &start, &end);  
    reverse( str, start, end );  
    printf("%s\n", str);  
    return 0;  
}  