#include<iostream>
#include<stack>
#include<vector>
#include<cstring>
using namespace std;
typedef long long ll;
stack<int>house;
stack<int>col;
ll color[1000010];
struct ho
{
ll h;
ll c;
}h[1000010];
ll ans;
void cal()
{

}
int main()
{   
    int t;
    cin>>t;
    while (t--)
    {
    ll n;cin>>n;
    for (ll i = 0; i <n; i++)
    cin>>h[i].c;
    for (ll i = 0; i <n; i++)
    cin>>h[i].h;
    for (ll i = 0; i <n; i++)
    {int flag=0;
    if(house.empty())
    {
    house.push(h[i].h);
    col.push(h[i].c);
    color[h[i].c]++;if(color[h[i].c]==1)ans++;
    }
    else if(h[i].h>=house.top())
    {
    while (house.top()<=h[i].h)
    {
    house.pop();
    color[col.top()]--;if(color[col.top()]==0)ans--;
    col.pop();
    if(house.empty())break;
    }
    house.push(h[i].h);col.push(h[i].c);
    color[col.top()]++;if(color[col.top()]==1)ans++;
    }
    else if(h[i].h<house.top())
    {
    house.push(h[i].h);
    col.push(h[i].c);
    color[h[i].c]++;if(color[h[i].c]==1)ans++;
    }
    if(i==n-1)cout<<ans;
    else cout<<ans<<" ";
    /*cout<<house.top()<<" "<<col.top()<<endl;*/
    }
    cout<<endl;
    memset(h,0,sizeof(ho)*n);ans=0;
    memset(color,0,sizeof(color));
    while(!house.empty())house.pop();
    while(!col.empty())col.pop();
    }
  return 0;  
}