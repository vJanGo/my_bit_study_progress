#include<stdio.h>  
#include<string.h>  
  
  
int huiwen(char str[],int a,int b )  
{  
    if(str[a]!=str[b]) {  
        return 0;  
    }  
    else if(a==b||(a+1==b&&str[a+1]==str[b])) {  
        return 1;  
    }  
    else if(str[a]==str[b])  {  
        return huiwen(str,a+1,b-1);  
    }  
}  
  
int main()  
{  
    char str[800];  
    int t,p;  
    gets(str);    
    t=strlen(str);  
    if(t==0)  
        printf("Yes\n");  
    else {  
        p=huiwen(str,0,t-1);  
        if(p==1)  
            printf("Yes\n");  
        else if(p==0)  
            printf("No\n");   
    }  
    return 0;  
}  
