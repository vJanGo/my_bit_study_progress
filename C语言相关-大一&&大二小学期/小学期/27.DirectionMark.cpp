/*
 * @Author: vJanGo
 * @Date: 2023-09-08 15:47:58
 * @FilePath: \languageCworks\小学期\27.DirectionMark.cpp
 * @Description: 小学期-
 * 
 */
#include<iostream>
#include<cstring>
#include<math.h>
using namespace std;
typedef long long ll;
ll f[2001][2001];
ll head[2001];
int n;
int main()
{
    cin>>n;
    for (int i = 0; i <=n; i++)
    cin>>head[i];
    memset(f,0,sizeof(f));
    f[1][head[0]]=1;
    for (int i = 2; i <=n; i++)
    {
    for (int j = 0; j <i; j++)
    {
    if(f[i-1][head[j]])
    {   int ml=max(head[i-1],head[j]);
        int sl=min(head[i-1],head[j]);
        if(head[i]<=sl){f[i][ml]=(f[i][ml]+f[i-1][head[j]])%2147483647;}
        else if(head[i]>=ml){f[i][sl]=(f[i][sl]+f[i-1][head[j]])%2147483647;}
        else if(head[i]>sl&&head[i]<ml){f[i][ml]=(f[i][ml]+f[i-1][head[j]])%2147483647;f[i][sl]=(f[i][sl]+f[i-1][head[j]])%2147483647;}
    }
    }
    }
    ll res=0;
    for (int i =0; i <=n; i++)
    {
    if(f[n][head[i]])res+=f[n][head[i]];
    }
    cout<<(res%2147483647)<<endl;
    return 0;
}
