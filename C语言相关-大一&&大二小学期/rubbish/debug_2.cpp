#include <stdio.h>

void combn( char *a, char *b )    //将a字符串的第一个字符插入b字符串
{                                                //a:待合并的字符串的首地址，b:合并后的字符串的首地址
    int j=0,k=0;
    if(a[0] == '\0' )                        //待合并的字符串是空字符串，递归结束
        return;
    while( b[j] != '\0' )                   //找到b字符串中第一个不小于a[0]的字符b[j]
    {
        if( a[0] >= b[j] )
            j++;
        else
            break;
    }
    if( b[j] == '\0' )                         //如果b[j]是字符串结束标志
    {
        b[j]= a[0];                           //将字符a[0]插在b字符串的串尾
        b[j+1]='\0';
    }    
    else if( a[0] < b[j] )                   //将字符a[0]插入原b[j]处
    {
        k = j;
        while( b[k] != '\0' )                //找到原b字符串尾
            k++;
        while( k >= j )                      //b[j]及后面的所有字符后移一个位置
        {
            b[k+1] = b[k];
            k--;
        }
        b[j] = a[0];                           //将a[0]插在b[j]处
    }
    combn( &a[1], b );                    //递归调用comb函数，插入a字符串的下一个字符
    return;
}

int main( )
{
    int i,n;
    char sa[100],sc[1000]={'\0'};     //sa保存新输入的字符串，sc保存合并后的字符串
    printf("Number of strings n:");
    scanf("%d",&n);     
    getchar();              //输入待合并的字符串的个数
    for(i=0; i<n; i++ )
    {
        gets(sa);                              //读入一个字符串
        combn( sa, sc );                   //将字符串sa合并到字符串sc中
    }
    i=0;
    while (sc[i]!='\0')
    {
    if(sc[i]==sc[i+1])
    {
        for (int j=i+1; sc[j]!='\0'; j++)
        {
            sc[j]=sc[j+1];
        }
    }
    else i++;    
    }
    
    printf( "Combined:%s\n", sc );    //输出合并后的字符串
    return 0;
}

