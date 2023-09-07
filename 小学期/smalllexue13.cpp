#include<iostream>
using namespace std;
typedef long long int ll;
ll z[300010];
ll num;
void together(ll begin,ll mid,ll end)
{ll key=0;

ll* b=new ll[end-begin+1];
ll i=begin;
ll j=mid+1;
while(i<=mid&&j<=end)
{
if(z[i]<=z[j])
{
    b[key++]=z[i++];

}
else
{
    b[key++]=z[j++];
    num+=mid-i+1;
}
}
while(i<=mid)
{
    b[key++]=z[i++];
    
}
while(j<=end)
{
    b[key++]=z[j++];
    
}
key=0;
for (int i = begin; i <= end; i++)  
	{
		z[i] = b[key++];
	}
	delete[]b;     
}
void part(ll begin,ll end)
{   
    if(begin<end)
    {   ll mid = (begin+end)/2;
        part(begin,mid);
        part(mid+1,end);
        together(begin,mid,end);
        
    }
}
int main()
{
int n;
cin>>n;
for (int i = 0; i < n; i++)
{
    cin>>z[i];
}

part(0,n-1);

cout<<num<<endl;
return 0;
}