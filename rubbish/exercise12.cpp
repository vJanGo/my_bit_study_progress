#include <stdio.h>  
#include <string.h>  
void merge(int *A,int m,int *B,int n)
{int str[100]={0},k=0;
int i=0,j=0;
while(i<n&&j<m)
{
if(B[i]<=A[j])
{str[k++]=B[i++];}
else {str[k++]=A[j++];}
}
    while (j<m)
    {
        str[k++]=A[j++];
    }
    while (i<n)
    {
        str[k++]=B[i++];
    }
for ( int z = 0; z<m+n; z++)
{
    A[z]=str[z];
}
}
 int main() {  
    char input[100];  
    int A[100], B[100], m = 0, n=0;  
      
    // 读入第一个字符串数组  
    scanf("%s", input);  
    // 逐个提取数字并存储到数组A中  
    char *tokenA = strtok(input, "[],");  
    while (tokenA != NULL) {  
        sscanf(tokenA, "%d", &A[m++]);  
        tokenA = strtok(NULL, "[],");  
    }  
      
    // 读入第二个字符串数组  
    scanf("%s", input);  
    // 逐个提取数字并存储到数组B中  
    char *tokenB = strtok(input, "[],");  
    while (tokenB != NULL) {  
        sscanf(tokenB, "%d", &B[n++]);  
        tokenB = strtok(NULL, "[],");  
    }  
      
    // 合并数组B到数组A中  
    merge(A, m, B, n);  
      
    // 打印数组A  
    printf("[");  
    int i;  
    for(i = 0; i < m+n-1; i++)  
      printf("%d,", A[i]);  
    printf("%d]\n", A[i]);  
  
    return 0;  
}  
  
