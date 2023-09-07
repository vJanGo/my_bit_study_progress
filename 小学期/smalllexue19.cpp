#include<stdio.h>
#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
typedef long long ll;
stack<ll>z;
ll m;
int main()
{   
    ll n;
    while(~scanf("%lld",&n))
    {
    ll flag=0;
    ll sum=0;
    m=0;
    while(!z.empty())z.pop();
    while(n--){
    ll tmp;
    cin>>tmp;
    m=m>tmp?m:tmp;
    if(z.empty())z.push(tmp);
    else if(tmp==z.top())z.pop();
    else if(tmp>z.top()){flag=1;}
    else if(tmp<z.top())z.push(tmp);
    }
    if(flag==1)cout<<"NO"<<endl;
    else if(z.empty()||z.top()==m)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    return 0;
}