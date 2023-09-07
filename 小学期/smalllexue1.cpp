#include<stdio.h>
#include<string.h>
int main()
{int n;char s[100];int high=100,low=-1;
while(scanf("%d",&n),n)
{
getchar();
gets(s);
if(strcmp(s,"too high")==0)
{
	if(n<high)high=n;
}
else if(strcmp(s,"too low")==0)
{
	if(n>low)low=n;
}
else if(strcmp(s,"right on")==0)
{
    if(n>low&&n<high)printf("Tom may be honest\n");
	else printf("Tom is dishonest\n");
    high=100,low=-1;
}
}
return 0;
}
