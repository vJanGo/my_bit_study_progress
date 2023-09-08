#include<stdio.h>
 
long long int left_max[100000] = {0}, right_max[100000] = {0}, high[100000] = {0};
 
int main() {
    int n, T;
    scanf("%d", &T);
    for (int i=T; T; T--) {
 
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
            scanf("%lld", &high[i]);
 
                
        left_max[0] = high[0];  
        right_max[n - 1] = high[n - 1];   
 
        for (int i = 1; i < n - 1; i++)
            if (high[i] < left_max[i - 1])
                left_max[i] = left_max[i - 1];
            else
                left_max[i] = high[i];
        for (int i = n - 2; i > 0; i--)
            if (high[i] < right_max[i + 1])
                right_max[i] = right_max[i + 1];
            else
                right_max[i] = high[i];
            
                long long int total = 0;  
        for (int i = 1; i < n - 1; i++)
            if (left_max[i] > right_max[i])
                total += right_max[i] - high[i];
            else
                total += left_max[i] - high[i];
 
        printf("%lld\n", total);
    }
}