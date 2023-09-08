//品味程序
/*do while的连续使用
多重do while的使用
使用getchar()输入并储存数字
细品*/
//
/*先看看我们的ascll表吧！
48~57是数字，
while(1)是死循环，可以结合break；使用！！！很有用！*/



#include<stdio.h>
int main(){
    int min=100,max=-100,temp=1,calc;char c,d;
    do{                           //16~62，顶层循环，用于不断往里面输入数字
        c=getchar();              //输入第一个字符
        if( c <= 57 && c >= 48 ){//扫描到一个数字
            temp *= (c-48);      //使ascll变为整数 
            do{                  //第一个数字的后面字
                d=getchar();
                if(d >= 48 && d <= 57){//其后又一个数字
                    temp = 10*temp + d-48;
                }else if(44 == d){//ascll码里44是逗号
                    break;
                }
                }while(1);//while死循环，用于输入第一个数字的全部
            if(temp<min){//比较大小
                min=temp;
            }
            if(temp>max){
                max=temp;
            }
            temp=1;
            
        }else if(c==42||c==43||47==c||37==c){//输入的是符号的话......结束
            break;
        }else if(45==c)
        {//输入负数
            d=getchar();
            if(d >= 48 && d <= 57){//负号后有数字
                temp=0-d+48;//将ascll变负数
                 do{
                    d=getchar();//扫描到其后有数字
                    if(d >= 48 && d <= 57){
                        temp = 10*temp - d+48;
                    }else if(44 == d){
                        break;
                    }
                    }while(1);  //同上
            if(temp<min){
                min=temp;
            }
            if(temp>max){
                max=temp;
            }
            temp=1;     //将值回归
                          
            }else{
                break;
            }  
        }
    }
    while(1);
    if(max < 0){
        printf("(%d) %c (%d) = ",max,c,min);
    }
    if(min >= 0){
        printf("%d %c %d = ",max,c,min);
    }
    if(max >= 0 && min < 0){
        printf("%d %c (%d) = ",max,c,min);
    }
    switch(c){
        case 45:calc=max - min;break;
        case 47:calc=max / min;break;
        case 43:calc=max + min;break;
        case 42:calc=max * min;break;
        case 37:calc=max % min;break;        
    }
    printf("%d\n",calc);
    return 0;
}
