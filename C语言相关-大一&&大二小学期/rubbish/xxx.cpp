
#include <stdio.h>  
#include <stdlib.h>  
#include<string.h>
int countsub( char *str, char *ss );  
  
main( )  
{  
    char s1[1000] = {0}, s2[100] = {0};  
    gets(s1);  
    gets(s2);  
    printf("%d\n", countsub( s1, s2 ) );  
}  
int countsub( char *str, char *ss )
{
int lenstr=strlen(str);
int lenss=strlen(ss);
char *p;
char *q;
int count=0;
p=strstr(str,ss);
if(p==NULL)return 0;
do{
q=strstr(p+lenss,ss);
if((q-p)==lenss)count++;
p=q;
}while(q!=NULL);
return count+1;
}