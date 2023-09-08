#include<stdio.h>
int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	int i=n,j,w;
	int takuan=0;
	int di=1+4*(k-1)*n;
	int kuan=-3;
	while(i>0)
	{
		for( j=1;j<=k;j++)//塔顶
		{kuan+=4;
        if(j==k-1)takuan=kuan;
        int left=(di-kuan)/2;
        int right=(di-kuan)/2+kuan;
			for(w=1;w<=di;w++)
			{
				if(j==1)
				{
			    if(w>left&&w<=right)printf("*");
			    else printf(" ");
				}
				else if(j==k)
				{
				if(w>left&&w<=right)printf("*");
				else printf(" ");
				}
				else 
				{
					if(w==left+1||w==right)printf("*");
					else printf(" ");
				}
			}
			printf("\n");
		}
        for (j=1;j<=k;j++)//塔身
        {int taleft=(di-takuan)/2;
        int taright=(di-takuan)/2+takuan;
            for(w=1;w<=di;w++)
            {
            if(w==taleft+1||w==taright)printf("*");
			else printf(" ");
            }
            printf("\n");
        }
        i--;
        kuan-=4;
        if(i==0)
        {
            for ( j = 1;  j<=di; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
return 0;
}