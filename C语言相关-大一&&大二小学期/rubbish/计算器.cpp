#include <stdio.h>
int main(void)
{//输入1，2，+ 以此类推
    int a=0,f=0;
    char str[1000];
    scanf("%s",str);
    for (int i=0;i<1000;){
        while(str[i]!=','){
            if (str[i]=='-'){f=1;i++;continue;}
            if (str[i]>='0'&&str[i]<='9'){a*=10;a+=str[i]-'0';}
            if (f==1) {a*=-1;f=0;}
            i++;
        }
        int max=a,min=a;
        printf("%d %d\n",max,min);
        while(1){
            while(str[i]!=','){
                if (str[i]=='-'&&str[i+1]!=','){f=1;i++;continue;}
                if (str[i]=='-'&&str[i+1]==','){printf("%d - %d = %d\n",max,min,max-min);return 0;}
                if (str[i]=='-'&&str[i+1]==','&&min<0){printf("%d - (%d) = %d\n",max,min,max-min);return 0;}
                if (str[i]>='0'&&str[i]<='9'){a*=10;a+=str[i]-'0';}
                if (f==1) {a*=-1;f=0;}
                if(str[i]=='+'){printf("%d + %d = %d\n",max,min,max+min);return 0;}
                if(str[i]=='*'){printf("%d * %d = %d\n",max,min,max*min);return 0;}
                if(str[i]=='/'){printf("%d / %d = %d\n",max,min,max/min);return 0;}
                if(str[i]=='%'){printf("%d % %d = %d\n",max,min,max%min);return 0;}
                if(str[i]=='%'&&min<0){printf("%d % (%d) = %d\n",max,min,max%min);return 0;}
                if(str[i]=='+'&&min<0){printf("%d + (%d) = %d\n",max,min,max%min);return 0;}
                if(str[i]=='*'&&min<0){printf("%d * (%d) = %d\n",max,min,max%min);return 0;}
                if(str[i]=='/'&&min<0){printf("%d / (%d) = %d\n",max,min,max%min);return 0;}
                i++;
            }
            max=(a>max)?a:max;
            min=(a<min)?a:min;
            a=0;
            i++;
        }
    }
    return 0;
}