	#include<stdio.h>
    #include<string.h>
    #include<stdlib.h>
    char* solve(char* s, char* t ) 
{
    int lens = strlen(s);
    int lent = strlen(t);
 
    int lenresult = (lens > lent ? lens : lent) + 2; // 这里加二，创建一头一尾多两个位置
    int curresult = lenresult - 1;                   // 一来字符结尾的\0，二来首位可能进一
 
    int temp, flag = 0;
 
    char* result = (char*)malloc(sizeof(char) * (lenresult));
 
    result[curresult] = 0;   // 字符里面的0其实就是\0
 
    while(lens || lent)
	{
        temp = flag;            // 后一位的进一，继承到前一位计算 
                                // 如果没有进一，那就是0，也是一种初始化
        if(lent)
		{
			temp += t[--lent] - '0';    	// 过渡到整数的运算	
		}
        if(lens)
		{
			temp += s[--lens] - '0';
		}
        flag = temp / 10;       // 逢十进一 
        temp %= 10;             // 得到尾数存储入字符串 
        result[--curresult] = temp + '0';   // 将整数返还给字符形式 ，存储入字符串 
    }
    result[0] = flag + '0';     // 这里得到最高位的数字，用于继承到字符串首位 
    return flag ? result : result + 1;     
    // 如果最高位还进一了，那就返回字符串首地址，如果没有，返回下一位 
}
    int main()
    {
    int a=0;
	int b=0;
	scanf("%d %d",&a,&b);
	char res[30]="1";
	int n=b-a-1;
	char arr[30]="1";
	char brr[30]="1";
	while(n--)
	{
		strcpy(res,solve(arr,brr));   // solve函数返回的也是一个指针
		strcpy(arr,brr);
		strcpy(brr,res);
	}
    printf("%s\n",res);
    return 0;
}