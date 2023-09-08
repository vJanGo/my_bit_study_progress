#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(void)
{
    srand((unsigned int)time(NULL));
    int key=0;
    int red[6]={1,2,3,4,5,6};//红球6个1~33
    int  blue[1]={1};//蓝球1个1~16
    int i=0,j=0;
    int value;
    int count=0;
    int str[6]={0};
    do 
    {
        count++; 
        //生成随机红球
        for(i=0;i<6;i++)
        {
            value=rand()%33+1;
            for(j=0;j<i;j++)
            {
                if(value==str[j])
                {
                    i--;
                    break;
                }
            }
            str[i]=value;
        }
        //生成随机蓝球
        int c=rand()%16+1;
        int num=0,num1=0;
        //统计红球和蓝球中有多少个与开奖号码相同
        for(i=0;i<6;i++)
        {
            if(red[i]==str[i])
            num++;
        }
        if(c==blue[0])
        num1++;
        if(num==4&& num1==1)
        {
            key++;
            break;
        }
    }while(key!=1);
    printf("需要运行程序 %d 次才能得到五等奖\n", count);
    return 0;
}

