#include<stdio.h>
#include <string.h>
#define size 100
void merge(char longer[],char shorter[],int lenth)
{
   char new[size]={0};
   char *p=shorter;
   int i=0;
   while (*p&&i!=lenth)
   {
    if(longer[i]<=*p)
    {
    new[strlen(new)]=longer[i];
    i++;
    }
    else{
        new[strlen(new)]=*p;
        *p++;
    }
   }
    if(i!=lenth)
    {   while(i!=lenth)
        {
        new[strlen(new)]=longer[i];
        i++;
        }

    }
    else {
        while(*p)
        {
        new[strlen(new)]=*p;
        *p++;
        }
    }
   
	printf("%s\n",new);
}
int main()
{ char string1[size];
gets(string1);
  char string2[size];
gets(string2);
int n1=strlen(string1);
int n2=strlen(string2);
if (n1>n2){merge(string1,string2,n1);}
else {merge(string2,string1,n2);}
system("pause");
	return 0;
}