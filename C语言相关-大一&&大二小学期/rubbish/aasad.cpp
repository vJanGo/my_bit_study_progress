#include <stdio.h>

int main()
{
    int y[10];
    int m[10];
    int d[10];
    int y1[10];
    int m1[10];
    int d1[10];
    int count;
    int i;
    int num;
    int s; 
    scanf("%d", &count);
    for (i = 0; i < count; i++)
    {
        scanf("%d%d%d", &y[i], &m[i], &d[i]);
        // 判断输入是否合法
        if (m[i] < 1 || d[i] < 1 || m[i] > 12)
        {
            return 0;
        }
        // 判断每个月的天数是否合法
        if (m[i] == 2)
        {
            if ((y[i] % 4 == 0 && y[i] % 100 != 0) || y[i] % 400 == 0)
            {
                if (d[i] > 29)
                {
                    return 0;
                }
            }
            else
            {
                if (d[i] > 28)
                {
                    return 0;
                }
            }
        }
        else if (m[i] == 1 || m[i] == 3 || m[i] == 5 || m[i] == 7 || m[i] == 8 || m[i] == 10 || m[i] == 12)
        {
            if (d[i] > 31)
            {
                return 0;
            }
        }
        else if (m[i] == 4 || m[i] == 6 || m[i] == 9 || m[i] == 11)
        {
            if (d[i] > 30)
            {
                return 0;
            }
        }
    }
 for(i=0;i<count;i++)
        {
        	y1[i]=y[i];
        	m1[i]=m[i];
        	d1[i]=d[i];
		}
    for (i = 0; i < count; i++)
    {
        num = 0;
        while (y[i] != 1990 || m[i] != 1 || d[i] != 1)
        {
            d[i]--;
            num++;
            if (d[i] == 0)
            {
                if (m[i] == 3)
                {
                    if ((y[i] % 4 == 0 && y[i] % 100 != 0) || y[i] % 400 == 0)
                    {
                        d[i] = 29;
                        m[i]--;
                    }
                    else
                    {
                        m[i]--;
                        d[i] = 28;
                    }
                }
                else if (m[i] == 2 || m[i] == 4 || m[i] == 6 || m[i] == 8 || m[i] == 9 || m[i] == 11)
                {
                    m[i]--;
                    d[i] = 31;
                }
                else if (m[i] == 5 || m[i] == 7 || m[i] == 10 || m[i] == 12)
                {
                    m[i]--;
                    d[i] = 30;
                }
                else if (m[i] == 1)
                {
                    y[i]--;
                    m[i] = 12;
                    d[i] = 31;
                }
            }
        }
        num++;
		while(num>=5)num-=5;
		if(num==1||num==2||num==3)printf("He was fishing on %d.%d.%d\n",y1[i],m1[i],d1[i]); 
		else printf("He was basking on %d.%d.%d\n",y1[i],m1[i],d1[i]); 
    }
    return 0;
}

