#include <stdio.h>  
#include <string.h>
int countsub( char *str, char *ss );  
  
int main( )  
{  
    char s1[1000] = {0}, s2[100] = {0};  
    gets(s1);  
    gets(s2);  
    printf("%d\n", countsub( s1, s2 ) );  
    return 0;
}  
int countsub( char *str, char *ss )
{
if(strstr(str,ss)==NULL)return 0;
int count=0;
char *p,*q;
p=strstr(str,ss);
int len=strlen(ss);
do{
q=p;
p=strstr(p+len,ss);
if((p-q)==len)count++;
}while(p!=NULL);
return count+1;
}