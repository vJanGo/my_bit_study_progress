#include <stdio.h>
int main()
{
	int y=1, m=1, d=1, n=0;
	scanf ("%d%d%d%d", &y, &m, &d, &n);
//判断输入合法 
	if (n<0||m<1||d<1||m>12) return 0;
	if (m==2)
	{
		if ((y%4==0&&y%100!=0)||y%400==0)
		{
			if (d>29)	return 0;
		}
		else
			if (d>28)	return 0;
	}
	else if (m==1||m==3||m==5||m==7||m==8||m==10||m==12)
		if (d>31)	return 0;
	else if (m==4||m==6||m==9||m==11)
		if (d>30)	return 0;
		
	for (int i=1; i<=n; i++)
	{
		d++;
			
		if (d==29)
		{	
			if (m==2)
				{
				if ((y%4==0&&y%100!=0)||y%400==0)
					continue;
				else
					{
						m++;
						d=1;
					}
				}
		}
		
		else if (d==30)
		{
			if (m==2)
			{
				if ((y%4==0&&y%100!=0)||y%400==0)
				{
					m++;
					d=1;
				}
				else continue;
			}
		}
		
		else if (d==31)
		{
			if (m==4||m==6||m==9||m==11)
			{
				m++;
				d=1;
			}
			else continue;
		}
		
		else if (d==32)
		{
			
			if (m==1||m==3||m==5||m==7||m==8||m==10)
			{
				d=1;
				m++;
			}
			if (m==12)
			{
				y++;
				m=1;
				d=1;
			}
		}
		else continue;
	}
	
	printf ("%d.%d.%d\n", y, m, d);
	return 0;
} 
