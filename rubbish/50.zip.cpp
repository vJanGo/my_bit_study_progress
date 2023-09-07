/*#include<stdio.h>
#include<string.h>
char ostr[80];
char word[100][100];
char estr[80][80];
int hang=0,lie=0;
int hang1=0;
void in(char *p)
{   int count=0;
    for (int i = 0; p[i]!='\0'; i++)
    {
    if((p[i-1]>='a'&&p[i-1]<='z')||(p[i-1]>='A'&&p[i-1]<='Z'))
    {   count++;
        hang++;lie=0;
        word[hang][lie++]=p[i];
        if(((p[i+1]>='a'&&p[i+1]<='z')||(p[i+1]>='A'&&p[i+1]<='Z')))
        {
        lie=0;hang++;
        }
    }
    else if((p[i+1]>='a'&&p[i+1]<='z')||(p[i+1]>='A'&&p[i+1]<='Z'))
    {
        word[hang][lie]=p[i];
        lie=0;hang++;
    }
    else if(p[i]>='a'&&p[i]<='z')
    {
        word[hang][lie++]=p[i];
    }
    else if (p[i]>='A'&&p[i]<='Z')
    {
        word[hang][lie++]=p[i];
    }
    else
    {
         word[hang][lie++]=p[i];
    }
    }
}
void check(char *p)
{
    for(int i=0;i<hang;i++)
    {
    for (int j = 0; j<hang; j++)
    {
        if(strstr(&word[i][0],&word[j][0])==NULL)
        {
        strcpy(&estr[i][0],&word[i][0]);
        }
        else
        {
        for (int z = 0; word[i][]; z++)
        {
            
        }
        
        }
    }
    
    }
}
int main()
{   
    while(gets(ostr)!=NULL)
{
    
    in(ostr);
}
}*/