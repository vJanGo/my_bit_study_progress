#include<stdio.h>
#include<string.h>
char a[100];
void paixu(char *a,int left,int right)
{
if(left==right)return;
for(int i=right;i>=0;i--)
{
if((a[i]<'a'&&a[i]>'Z')||a[i]<'A'||a[i]>'z')right--;
}
if(a[left]>a[right])
{
    char tmp=a[right];
    a[right]=a[left];
    a[left]=tmp;
}
if(right==left+1)return;
paixu(a,left+1,right-1);

}
int main()
{
   scanf("%s",a);
   paixu(a,0,strlen(a)-1);
   printf("%s",a);
   return 0;
}