#include<stdio.h>
int main()
{
    struct {
    int i;
    char c;
    float a;
} test;
printf("%d",sizeof(test));
}