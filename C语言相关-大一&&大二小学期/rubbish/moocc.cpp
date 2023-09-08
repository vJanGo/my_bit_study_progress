#include <stdio.h>
#include <string.h>
int main(int argc,char *argv[]){
    char a[300],b[50],c[50],t[300],*pt;
    int lb;
    scanf("%100s%50s%50s",a,b,c);
    lb=strlen(b);
    while(pt=strstr(a,b)){
        strcpy(t,pt+lb);
        strcpy(pt,c);
        strcat(a,t);
    }
    puts(a);
    return 0;
}