#include<iostream>
#include<string.h>
using namespace std;
char fatty[10]={'f','a','t','t','y','h','a','p','p','y'};
int main()
{
int t;
int i,j,k,flag=1,w;
int site_son1=0,site_dad1=0,diff_number=0,site_son2=0,site_dad2=0;
char str[10000];
cin>>t;getchar();
for(w=0;w<t;w++)
{   diff_number=0;
flag=1;
gets(str);
for ( i = 0; i <strlen(str); i++)
{   
    
    diff_number=0;
    if(i+9>=strlen(str))break;
    for (j=0; j<10;j++)
    {
    if(str[i+j]==fatty[j])continue;
    else if(diff_number==0)
    {
        site_son1=j;site_dad1=i+j;diff_number++;
    }
    else if(diff_number==1)
    {
        site_son2=j;site_dad2=i+j;diff_number++;
    }
    else if(diff_number>=2){diff_number++;}
    }
    //cout<<diff_number<<endl;
    if(diff_number==0)
    {
        cout<<i+3+1<<" "<<i+2+1<<endl;
        flag=0;
        break;
    }
    else if(diff_number==1)
    {
        for (k = 0; k < strlen(str); k++)
        {
            if(k>=i&&k<=i+9)continue;
            if(str[k]==fatty[site_son1])
            {
                cout<<k+1<<" "<<site_dad1+1<<endl;
                flag=0;
                break;
            }
        }
        if(flag==0)break;
    }
    else if(diff_number==2)
    {
       if(str[site_dad1]==fatty[site_son2]&&str[site_dad2]==fatty[site_son1])
       {
        cout<<site_dad1+1<<" "<<site_dad2+1<<endl;
        flag=0;
        break;
       } 
    }
    else continue;
}
if(flag==1)cout<<-1<<endl;
}
return 0;
}