/*
 * @Author: vJanGo
 * @Date: 2023-09-08 13:29:36
 * @FilePath: \languageCworks\小学期\30.有一个人前来买瓜.cpp
 * @Description: 小学期-有一个人前来买瓜
 * 
 */
#include<iostream>
#include<math.h>
#include<cstring>
using namespace std;
struct timu
{
    int weight;
    int v;
    int gold;
}watermelon[110];
long  long f[510][510];
int n,q;
void ask()
{
    for (int i = 1; i <=n; i++)
    {
    for (int j = 500; j >=0; j--)
    {
    for (int s = 500; s >=0; s--)
    {
    if(f[j][s]>=0&&j+watermelon[i].weight<=500)f[j+watermelon[i].weight][min(s+watermelon[i].v,500)]=max(f[j+watermelon[i].weight][min(500,s+watermelon[i].v)],f[j][s]+watermelon[i].gold);
    }
    }
    }
}
int main()
{
    cin>>n>>q;
    for (int i = 1; i <=n; i++)
    {
        cin>>watermelon[i].weight>>watermelon[i].v>>watermelon[i].gold;
    }
    
    memset(f,-1,sizeof(f));
    f[0][0]=0;
    ask();
    for (int i = 1; i <=q; i++)
    {
    long long count=-1;
    int w,v;
    cin>>w>>v;
    for (int j = 0; j <= w ; j++){
    for (int s = v; s <=500; s++)
    {
        count=max(count,f[j][s]);
    }
    }
    cout<<count<<endl;
    }
    return 0;
}