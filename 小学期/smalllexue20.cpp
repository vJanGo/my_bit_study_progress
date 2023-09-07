#include<iostream>
using namespace std;
int n;
int d,dn,x,xn;
int flagd=1,flagx=1;
char name[200010];
int main()
{   
    cin>>n;
    for (int i = 0; i <n; i++)
    {
    cin>>name[i];
    if(name[i]=='D')d++;
    if(name[i]=='X')x++;
    }
    for (int i = 0; i < n; i++)
    {
    if(name[i]=='D')
    {
        dn++;
        if(flagd<=dn){flagx++;x--;}
        else continue;
    }
    if(name[i]=='X')
    {
        xn++;
        if(flagx<=xn){flagd++;d--;}
        else continue;
    }
    }
    if(d>x)cout<<'D'<<endl;
    if(d<x)cout<<'X'<<endl;
    if(d==x)
    {
        if(name[n-1]=='D')cout<<'X'<<endl;
        if(name[n-1]=='X')cout<<'D'<<endl;
    }
    return 0;
}