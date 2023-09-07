#include <stdio.h>  
#include <stdlib.h>  
int main( )   
  {int n,money,num;
  	scanf("%d",&n);
  	money=10*n;
  	num=money/16;
  	
  	if(money%16==0)printf("%d,%d,%d\n",10*num,12*num,9*num);
  	else printf("No change.\n");
  	return 0;
  }
