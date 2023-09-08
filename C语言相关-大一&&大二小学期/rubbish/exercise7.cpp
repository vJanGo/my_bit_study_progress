#include <stdio.h>
long long Hanoi(int n){
    if(n==1){
        return 2;
    }
    else
        return 3*Hanoi(n-1)+2;
}
int main() 
    {
    int n;
    scanf("%d",&n);
        printf("%d\n",Hanoi(n));
    }

