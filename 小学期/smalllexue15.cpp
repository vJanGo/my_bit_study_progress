#include<iostream>
using namespace std;
int main()
{
    int a;int n;int s=0;int tmp[200010];
    cin>>n;
    for (int i = 1; i <=n; i++)
    cin>>a;
    for (int i = 1; i <=n; i++)
    cin>>tmp[i];
    int pt=n;
    int flag=tmp[pt];
    int last=tmp[pt];
    if(last==1)s=1;
    else while (pt--)
    {
    if(tmp[pt]==flag-1)
    {
        if(tmp[pt]==1)s=1;
        flag--;
    }else break;

    }
    if(s){
    for (int i = 1; i <=n-last; i++)
    {
    if(tmp[i]==0)continue;
    else if(i+1+last-tmp[i]>0){s=0;break;}
    }
    }
    if(s)cout<<n-last<<endl;
    else
    {
    int max=0;
    for (int i = 1; i <= n; i++)
    {
    if(tmp[i]==0)continue;
    else if(i+1-tmp[i]>0&&i+1-tmp[i]>max)max=i+1-tmp[i];
    }
    cout << max + n << endl;  
    }
}