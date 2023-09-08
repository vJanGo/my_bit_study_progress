/*
 * @Author: vJanGo
 * @Date: 2023-09-07 11:01:21
 * @FilePath: \languageCworks\29龙神的背包.cpp
 * @Description: 小学期-龙神的背包
 * 
 */
#include<iostream>
using namespace std;
long long f[2010][2010];
long long wight[2010];
int main()
{
    int n,v;
    cin>>n>>v;
    f[0][0]=1;//余数为0 只有一种情况
    for (int i = 1; i <=n; i++)
    {
    cin>>wight[i];//读入每个包的质量
    for (int j = 0; j <v; j++)
    {
    f[i][j]=f[i-1][j];//不取任何东西，状态一直继承
    }
    for (int j = 0; j <v; j++)
    {
    f[i][(j+wight[i]%v)%v]+=f[i-1][j];//取东西即在上一件商品下留出余数空间
    }
    }
    cout<<f[n][0]-1<<endl;
    return 0;
}