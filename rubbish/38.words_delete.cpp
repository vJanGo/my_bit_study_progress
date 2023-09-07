#include<stdio.h>
#include<string.h>

void del_1(char *p){
    int len=strlen(p);
    for(int i=0;i<len;i++){
        int k=i+1;
        for(int j=i+1;j<len;j++){
            if(p[j]!=p[i])
                p[k++]=p[j];	
        }
        p[k]='\0';		//添加字符串结束标志
    }
}


int main(void){
    char p[100];
    scanf("%s",p);
    del_1(p);
    printf("%s\n",p);
}


