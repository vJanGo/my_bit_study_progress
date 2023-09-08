#include<iostream>
#include<queue>
using namespace std;
typedef long long ll;
struct node
{
    ll x;
    ll y;
    bool f=false;
    ll step;
}cy,bg,ed,now,net,start;
vector<node>g[300100];
queue<node>tree;
ll m;
int bfs(node&s,ll lt)
{
start.x=s.x;
start.y=s.y;
start.f=true;
start.step=s.step;
tree.push(start);
while (!tree.empty())
{
    now=tree.front();tree.pop();
    for (ll i = 0; i <g[now.y].size();i++)
    {
        if(g[now.y][i].f==false&&g[now.y][i].x==now.y)
        {
            if(g[now.y][i].y==lt) return now.step+1;
            g[now.y][i].f=true;
            net.x=g[now.y][i].x;
            net.y=g[now.y][i].y;
            net.f=g[now.y][i].f;
            net.step=now.step+1;
            tree.push(net);
        }
        
    }
    
}
return -1;
}
int main()
{
    
    cin>>m;
    ll tmp1,tmp2,tmp3,tmp4;
    for (ll i = 0; i <m; i++)
    {
        cin>>cy.x>>tmp1>>tmp2>>cy.y;
        g[cy.x].push_back(cy);
    }
    cin>>bg.x>>tmp1>>tmp2>>bg.y;
    cin>>ed.x>>tmp3>>tmp4>>ed.y;
    bg.step=1;
    ll flag=bfs(bg,ed.x);
    if(bg.y==ed.x)cout<<2<<endl;
    else if(bg.x==ed.x&&bg.y==ed.y&&tmp1==tmp3&&tmp2==tmp4)cout<<1<<endl;
    else if(flag!=-1)cout<<flag+1<<endl;
    else if(flag==-1)cout<<-1<<endl;
    return 0;
}