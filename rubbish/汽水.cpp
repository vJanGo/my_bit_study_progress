#include<stdio.h>
int main()
{
    int n,empty,count=0,last; 
    int a[10];
    int b[10];
    int i=0;
	  for(i=0;i<10;i++)
    	{
		scanf("%d",&n);
		a[i]=n;
		if(n==0){
		last=i;
		break;
        }
	}
        while(1)
	{   for(i=0;i<last;i++)
	{
		count=0;
		empty=a[i];
		while(empty>=3)
		{
		count+=empty/3;
		empty=empty%3+empty/3;
	    }
	    if(empty==2)
	    {count++;
		}
		b[i]=count;
	}
		for(i=0;i<last;i++){
	    printf("%d\n",b[i]);
	}
	    break;
	}
	return 0;
}
