#include <stdio.h>  
#include <string.h>  
#define MAX_LEN 10000
#include <stdlib.h>
int check(int *num)
{
    for (int i = 0; i <128; i++)
    {
      if(num[i]>0) return 0;
    }
return 1;
}
char* minWindow(char *s,char *t)
{  
    int slen=strlen(s);
    int left=0, right = 0; 
    int min=MAX_LEN;
    int tlen=strlen(t);
    int flag=0;
    int tmp[128]={0};
    int direction=0;
    
int i=0;
while (t[i] != '\0')
    {
        tmp[t[i++]]++;
    }

tmp[s[0]]--;
while (left<slen)
{
    if(direction==0)
    {
     if (right==slen)
     {
        direction=1;
        continue;
     }
     if (check(tmp))
     {
     if((right-left+1)<min)
     {
        flag=left;
        min=right-left+1;
     }
     direction=1;
     continue;
     }
     tmp[s[++right]]--;
    }
    else
    {
     tmp[s[left++]]++;
     if (!check(tmp))
     {
     direction=0;
     continue;
     }
     else if((right-left+1)<min)
     {
     flag=left;
     min=right-left+1;
     }     
    }
}
if(min<MAX_LEN){
char* ret = (char*)malloc(sizeof(char) * (min+1));
for (int i = 0; i <min; i++)
{
   ret[i]=s[flag+i];
}
ret[min]='\0';
return ret;
}
return "";
            
}
#include <stdlib.h>  
int main() {  
    char input[100000];  
    char S[MAX_LEN], T[MAX_LEN];  
  
    // 读取一整个字符串  
    scanf("%s", input);  
      
    // 使用 strtok() 函数分割字符串  
    // 第一个字符串存入S  
    char *ptr = strtok(input, ",");  
    if (ptr != NULL) {  
        int len = strlen(ptr);  
        if (len >= 2 && ptr[0] == '"' && ptr[len-1] == '"') {  
            ptr[len-1] = '\0';  
            memmove(ptr, ptr+1, len-1);  
        }  
        strncpy(S, ptr, len);  
        S[len - 1] = '\0';  
    }  
      
    // 第二个字符串存入T   
    ptr = strtok(NULL, ",");  
    if (ptr != NULL) {  
        int len = strlen(ptr);  
        if (len >= 2 && ptr[0] == '"' && ptr[len-1] == '"') {  
            ptr[len-1] = '\0';  
            memmove(ptr, ptr+1, len-1);  
        }  
        strncpy(T, ptr, len);  
        T[len - 1] = '\0';  
    }  
      
    // 求最小覆盖字串并打印  
    printf("\"%s\"\n", minWindow(S, T));  
  
    return 0;  
}  




/*
#include<stdlib.h>
int isSubstring(int num[])
{
    for (int i = 0; i < 128; i++)
    {
        if (num[i] > 0)
        {
            return 0;
        }
    }

    return 1;
}

char * minWindow(char * s, char * t){
    int num[128] = {0};

    int i = 0;
    //根据字符串t的情况，先初始化判断数组
    while (t[i] != '\0')
    {
        num[t[i++]]++;
    }

    int l = 0;
    int r = 0;
    num[s[0]]--;

    int length = strlen(s);
    int direction = 0;//用于切换左右指针的移动
    int target = 0;//记录目标字符串的起始位置，结合min得到最终的字符串
    int min = INT_MAX;//记录最小长度
    while (l < length)
    {
        if (direction == 0) //向右移动
        {
            if (r == length)//右指针到达末端
            {
                direction = 1;//切换到左指针运行
                continue;
            }

            if (isSubstring(num))//目前字符串满足要求
            {
                if ((r - l  + 1) < min)//判断是否最小
                {
                    target = l;
                    min = r - l  + 1;
                }
                direction = 1;//切换到左指针运行
                continue;
            }

            num[s[++r]]--;//对经过的字母的数量进行递减
        }
        else
        {
            num[s[l++]]++;//对经过的字母的数量进行递减增

            if (!isSubstring(num))//目前字符串不满足要求
            {
                direction = 0;//切换到右指针运行
                continue;
            }
            else if ((r - l  + 1) < min)//判断是否最小
            {
                target = l;
                min = r - l  + 1;
            }
        }
    }

    if (min < INT_MAX)
    {
        char* ret = (char*)malloc(sizeof(char) * (min+1));

        for (int i = 0; i < min; i++)
        {
            ret[i] = s[target + i];
        }

        ret[min] = '\0';

        return ret;
    }

    return ""; //不满足条件
}
*/