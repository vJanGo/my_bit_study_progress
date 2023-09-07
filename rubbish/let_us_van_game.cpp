#include<stdio.h>
int correct(int *p,int count)
{
	for(int i=1;i<=count;i++)
	{
		if(p[i]==1)return 1;
	}
	return 0;
}
int main()
{
  int count,num,flag,right=1;
  scanf("%d %d",&count,&num);
  int a[100]={0};
  int read=0;
  for(int i=1;i<=count;i++)
  a[i]=1;
  while(correct(a,count))
  { 
    if(a[right]==1)
  	{
  		read++; 
    }
    if(read==num)
    {
    	flag=right;
    	a[right]=0;
    	read=0;
	}
	if(right==count)
	{
		right=1;
		continue;
	}
	right++;
  }
  printf("The left child is NO %d.\n",flag);
  return 0;
}
