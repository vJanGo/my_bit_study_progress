#include<stdio.h>
#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
typedef long long ll;
stack<ll>z;
int main()
{
    ll n;
    while(~scanf("%lld",&n))
    {
    ll sum=0;
    while(n--){
    ll tmp;
    cin>>tmp;
    if(z.empty())z.push(tmp);
    else if(abs(tmp-z.top())%2==0)z.pop();
    else if(abs(tmp-z.top())%2!=0)z.push(tmp);
    }
    while(!z.empty()){sum++;z.pop();}
    if(sum==0||sum==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    return 0;
}