#pragma execution_character_set("gbk") 

/*#include "stdio.h"
 
int main(int argc, char **argv)
{
	int i, j, k, r, t;
	int a=1, b=3, c=7, d=12;
 
	int sum, arr[10000], count = 0, flag;		//�������ĸ���λ
	
	arr[0] = 0;
 
	scanf("%d %d %d %d", &a, &b, &c, &d);
	getchar();
 
	//�ҳ����в�ͬ�����
	for (i = 0; i <= 5; i++)
	{
		for (j = 0; j <= 5; j++)
		{
			for (k = 0; k <= 5; k++)
			{
				for (r = 0; r <= 5; r++)
				{
					if (i + j + k + r > 5)	//��Ʊһ�����5��
					{
						continue;
					}
 
					sum = a * i + b * j + c * k + d * r;   //��ϳ�����Ʊ��ֵ
					flag = 0;
					
					for (t = 0; t <= count; t++)	  //���������ֵ�Ƿ���ֹ�����ʵ��һ������ʡ�Ե���Ȼ��������������ʱ�����ʵ��Ĵ���Ҳ��		
					{
						if (sum == arr[t])
						{
							flag = 1;
							break;
						}
					}
					if (!flag)
					{
						count++;
						arr[count] = sum;						
					}
				}
			}
		}
	}
 
	printf("\n��ϳ������в�ͬ����Ʊ��ֵ:\n");
 	for (i = 1; i <= count; i++)
	{
 		printf("%4d", arr[i]);
		if (i % 10 == 0)
		    printf("\n");
	}
	int temp;
	//ð�����򣬲���������ֵ
	for (i = 1; i <= count; i++)
	{
		for (j = count; j > i; j--)
		{
			if (arr[j] < arr[j-1])
			{
				temp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = temp;
			}
		}
	}
 
	printf("\n\n���������в�ͬ����Ʊ��ֵ:\n");
	for (i = 1; i <= count; i++)
	{
		printf("%4d", arr[i]);
		if (i % 10 == 0)
			printf("\n");
	}	
	printf("\n");
 
	//�ҳ���1��ʼ����������
	for (i = 1; i <= count; i++)
	{
		if (arr[i] != i)
		{
			break;
		}
	}
	printf("The max is %d.\n", i-1);
	return 0;
}
*/
#include<stdio.h>
int main()
{   int a,b,c,d,sum,i,j;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    int q,w,e,r,flag,count=0;
    int arr[100]={0};
    for ( q = 0; q <=5; q++)
    {
     for ( w= 0; w <=5;w++)
    {
     for ( e = 0; e <=5; e++)
    {
     for ( r = 0; r <=5; r++)
    {
     
     if(q+w+e+r>5)
     {
      continue;
     }
     sum=q*a+w*b+e*c+r*d;
     flag=0;
     for( i=0;i<=count;i++)
     {
        if(arr[i]==sum)
        {flag=1;
        break;
        }
     }
     if(!flag)
     {  
        arr[count]=sum;
        count++;
     }
    }
    
    }
    
    }
    
    }
    for (  i = 0; i <count; i++)
    {
    for ( j = 0; j <count-i-1; j++)
    {
        if(arr[j]>arr[j+1])
        {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
    }
    for (i = 0; i < count; i++)
	{
		if (arr[i] != i+1)
		{
			break;
		}
	}
	printf("The max is %d.\n", i);
	return 0;

}