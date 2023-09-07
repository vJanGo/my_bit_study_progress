#include <stdio.h>  
#include <string.h>  
long long maxWater(int *arr,int arrlen)
{
long long sum=0;
long long min;
long long max_left[200000]={0};
long long max_right[200000]={0};
for (int i = 1; i <=arrlen-2; i++)
{
    max_left[i]=max_left[i-1]>arr[i-1]?max_left[i-1]:arr[i-1];
}
for (int i =arrlen-2; i >=1; i--)
{
    max_right[i]=max_right[i+1]>arr[i+1]?max_right[i+1]:arr[i+1];
}
for (int i = 1; i <=arrlen-2; i++)
{
if(max_left[i]>arr[i]&&max_right[i]>arr[i])
{
    min=(max_left[i]-arr[i])<(max_right[i]-arr[i])?(max_left[i]-arr[i]):(max_right[i]-arr[i]);
    sum+=min;
}
}
return sum;
}
  
int main() {  
    char input[400000];  
    int arr[200000], arrLen = 0;  
      
    // 读入字符串数组  
    scanf("%s", input);  
    // 逐个提取数字并存储到数组中  
    char *token = strtok(input, "[],");  
    while (token != NULL) {  
        sscanf(token, "%d", &arr[arrLen++]);  
        token = strtok(NULL, "[],");  
    }  
      
    // 计算接到雨水的最大量并打印  
    printf("%d\n", maxWater(arr, arrLen));  
  
    return 0;  
}  