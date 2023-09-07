#include<stdio.h>
#include<string.h>
#define size 100
int main()
{
    int n,m,num,count=0,ren;
    scanf("%d %d",&n,&m);
    num=n;ren=m;
    char dra[size];
    char man[size];
    int i,j;
    int z;
    for ( i = 0; i <n; i++)
    {
        scanf("%d",&dra[i]);
    }
    for ( i = 0; i <m; i++)
    {
         scanf("%d",&man[i]);
    }
    int len1,len2;
    len1=strlen(dra);
    len2=strlen(man);
    int min=10000;
    for ( i = 0; i <len1; i++)
    {  min=10000;
       for ( j = 0; j< len2; j++)
       {
       if((man[j]-dra[i])>=0&&(man[j]-dra[i])<min)
       {
       min=(man[j]-dra[i]);
       z=j;
       }
       }
       if(min!=10000&&ren!=0)
       {num--;
        ren--;
       count+=min+dra[i];
       man[z]=0;
       }
    
    }
    if(num==0)printf("%d\n",count);
    else printf("bit is doomed!\n");
    return 0;
}
/*
#include <stdio.h>
#include <stdlib.h>
 
#define N 100
 
int dragons[N];
int heros[N];
 
//升序排列
int cmp( int *a, int *b)
{
    return *a > *b;
}
 
int main()
{
	int i, j, m, n;
	scanf("%d %d", &n, &m);
	getchar();
	//输入龙头
	for(i = 0; i < n; i++)
	{
	    scanf("%d", &dragons[i]);
	    getchar();
	}
	//输入勇士
    for(i = 0; i < m; i++)
	{
	    scanf("%d", &heros[i]);
	    getchar();
	}
	//龙头排序
	qsort(dragons, n, sizeof(int), cmp);
	//勇士排序
	qsort(heros, m, sizeof(int), cmp);
	~~~
	for( i=0; i < n; i++ )
		printf("%3d",dragons[i]);
		putchar('\n');
    for( i=0; i < m; i++ )
		printf("%3d",heros[i]);
    ~~~
    int cost = 0;                        //校长的花费
    int dragon_count = n;                  //剩余龙头数
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(dragons[j] != -1 && heros[i] != -1 && heros[i] >= dragons[j])
            {
                cost += heros[i];
                dragons[j] = -1;    //赋值为-1，表示龙[j]已被杀死
                dragon_count--;     //龙头数自减1
                heros[i] = -1;      //赋值为-1，表示勇士[i]已经杀过龙
            }
        }
    }
    if(dragon_count > 0)
        printf("bit is doomed.\n");
    else
        printf("%d\n", cost);
	return 0;
}
*/