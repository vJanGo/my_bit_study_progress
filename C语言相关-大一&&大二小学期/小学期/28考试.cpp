/*
 * @Author: vJanGo
 * @Date: 2023-09-08 10:21:41
 * @FilePath: \languageCworks\小学期\28考试.cpp
 * @Description: 小学期-考试
 * 
 */
#include<iostream>
#include<math.h>
using namespace std;
struct timu
{
    int t;
    int w;
    int v;
}t[26];
long  long f[30100];
int main()
{
    int n,m;
    cin>>n>>m;
    for (int i = 1; i <=m; i++)
    {
        cin>>t[i].t>>t[i].w;
        t[i].v=t[i].t*t[i].w;
    }
    for (int i = 1; i <=m; i++)
    {
        for (int j = n; j >=t[i].t; j--)
        {
        f[j]=max(f[j],f[j-t[i].t]+t[i].v);
        }
        
    }
    cout<<f[n]<<endl;
    return 0;
}