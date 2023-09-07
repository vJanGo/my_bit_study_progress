#include<iostream>
using namespace std;
int a[1000000];
int n,v;
int main()
{
cin>>n>>v;
for(int i=1;i<=n;i++)
    {
		int x,y;
		cin>>x>>y;
		a[x]+=y;
	}
int res=0,total=0;
for(int i=1;;i++)
    {
		res=v;
        if(a[i-1])
        {
        int t=min(a[i-1],res);
        res-=t;
        total+=t;
        }
        if(a[i])
        {
        int t=min(a[i],res);
        total+=t;
        a[i]-=t;
        
        }
        if(i>10010)break;
	}
    cout<<total<<endl;
}

