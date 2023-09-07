#include<stdio.h>
int* function(int* a){
	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
	return a;
}
int main(){
	int a[10];
	int* b;
	b = function(a);
	printf("123\n");
	printf("%d%d%d\n",b[0],b[1],b[2]);

    return 0;
} 
