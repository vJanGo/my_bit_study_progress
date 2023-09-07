
#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	int i=0,j,d,s[100];
	scanf("%d %d %d",&a,&b,&d);
//	printf("%d %d %d",a,b,d);
	c=a+b;
	while(c){
		s[i++]=(int)c%d;
		c/=d;
	}
	for(j=i-1;j>=0;j--){
		printf("%d",s[j]);
	}
	if(i==0)	printf("0");
    printf("\n");
	return 0;
}