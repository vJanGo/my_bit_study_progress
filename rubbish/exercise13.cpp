#include <stdio.h>  
#include <string.h>  
int maxLength(int *arr,int slen){
    int left=0, right = 0; 
    int res=0, cnt=0; 
    int tmp[128] = {0};
    
    while(right < slen) {           
        if(0 == tmp[ arr[right] ]) {  
            tmp[ arr[right] ]=1;      
            right++;                   
            cnt++;                    
            res = res > cnt ? res : cnt;  
        }
        else {                           
            tmp[ arr[left] ] = 0;    
            left++;                    
            cnt--;                  
        }
    }
    return res;        
}


int main() {  
    char input[100000];  
    int arr[100000], arrLen = 0;  
      
    // 读入字符串数组  
    scanf("%s", input);  
    // 逐个提取数字并存储到数组中  
    char *token = strtok(input, "[],");  
    while (token != NULL) {  
        sscanf(token, "%d", &arr[arrLen++]);  
        token = strtok(NULL, "[],");  
    }  
      
    // 计算最长无重复子数组并打印  
    printf("%d\n", maxLength(arr, arrLen));  
  
    return 0;  
}  