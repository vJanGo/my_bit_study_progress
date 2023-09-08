#include <stdio.h>  
char str[100];  
void reverse( char *str, int i, int j )  
{     
    char temp;  
    if( i < j )  
    {  
        temp = str[i];  
        str[i] = str[j];  
        str[j] = temp;  
        reverse( str, i+1, j-1 );  
    }  
}  
int main()  
{    
    int n=0;  
    gets(str);  
    while( str[n] != '\0' )  
        n++;  
    reverse( str, 0, n-1 );  
    puts(str);  
    return 0;  
}  