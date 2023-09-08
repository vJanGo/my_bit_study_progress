#include<stdio.h>
int main()
{int c,y,m,d,w,n,i,r=0,num=0;
int arr[100]={0};
scanf("%d",&n);
c=n/100;
y=n-c*100;
if(n%400==0)r=1;
else if(n%4==0&&n%100!=0)r=1;
for(m=3;m<15;m++) 
{
	if(m==3||m==5||m==7||m==8||m==10||m==12)i=31;
	if(m==4||m==6||m==9||m==11)i=30;
	if(m==13){;y=y-1;i=31;}
	if(m==14&&r==0){y=y-1;i=29;}
	if(m==14&&r==1){y=y-1;i=28;}
for(d=1;d<=i;d++) 
{w=y + y / 4 + c / 4 - 2 * c + 26 * (m + 1) / 10 + d - 1;
while(w<0)w+=7;
w%=7;
if(w==5)
printf("%d/%d\n",m,d) ;
}
}
return 0;
}
