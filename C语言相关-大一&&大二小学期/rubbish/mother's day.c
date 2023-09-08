#include<stdio.h>

int main() {
    int c, y, d, w, n, num=0, s = -1;  // 初始化 s 的值
    scanf("%d",&n);
    c = n/100;
    y = n - c*100;
    for(d=1; d<=31; d++) {
        w = y+y/4+c/4-2*c+(26*5+26)/10+d-1;
        while(w<0) w+=7;
        w %= 7;
       if(w==0){num++;}
       if(num==2){s=d;d=32;}
    }
    printf("%d\n",s);
    return 0;
}
