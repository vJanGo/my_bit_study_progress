#include<stdio.h>
int main()
{   int H_count[14]={0,-50,-2,-3,-4,-5,-6,-7,-8,-9,-10,-20,-30,-40};
	int count=0,i,count0=0;
	int num,result=0;
	char pai_name;
	int pai_count;
	int flag=1;
	while(flag){
	int yang=0,zhu=0,doublen=1,H=0,Hn[13]={'0'};
	scanf("%d",&num);
	count++;
	if(num==0)count0++;
	else if(num==16)result=1000;
	else 
    {
	for(i=0;i<num;i++)
	{   
		scanf(" %c%d",&pai_name,&pai_count);
        result=0;
		if(pai_name=='C'&&pai_count==10)
		{
			doublen=2;
		}
		else if(pai_name=='S'&&pai_count==12)
		{
			zhu++;
		}
		else if(pai_name=='D'&&pai_count==11)
		{
			yang++;
		}
		else if(pai_name=='H')
		{
			
			Hn[H]=pai_count;
			H++;
		}
	}
	if(H==13)
	{
		if(yang==1&&zhu==1)result=500;
		else result=200;
	}
	else if(H>0)
	{
		for(i=0;i<H;i++)
		{
			result+=H_count[Hn[i]];
		}
	}
	if(zhu)result-=100;
	if(yang)result+=100;
	if(doublen==2)
	{
		if(num==1)result=50;
		else result*=doublen;
	}
	if(result>0)
	printf("+%d ",result);
	else printf("%d ",result);
    }
    if(count0==4)break;
    if(count==4)
	{
		count=0;count0=0;
	}printf("\n");
    
	}
}