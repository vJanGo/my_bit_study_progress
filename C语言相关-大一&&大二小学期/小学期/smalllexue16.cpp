#include<iostream>
#include<cstring>
#include<stack>
#include<vector>
#include <algorithm>
using namespace std;
stack<char>kuohao;
vector<int>lef;
vector<int>rig;
int main()
{
char k[100010];
int n;char c;int same=0;int sum=0;
cin>>n;
int le=0,ri=0;
while (n--)
{   while(!kuohao.empty()) kuohao.pop();
    memset(k, 0, sizeof(k));le=0;ri=0;
    cin>>k;
    int l=strlen(k);
    if (k[0]==')'&&k[l-1]=='(')continue;
    else 
    {
        for (int i = 0; i <l; i++)
        {
        if(k[i]=='('){le++;kuohao.push(k[i]);}
        else if(k[i]==')')
        {
            if(kuohao.empty()){ri++;}
            else if(c=kuohao.top(),c=='('){kuohao.pop();le--;}
        }
        }
    }
    if(le==0&&ri==0){same++;continue;}
    if(le>0&&ri>0)continue;
    if(le)lef.push_back(le);
    if(ri)rig.push_back(ri);
}
sort(lef.begin(),lef.end());
sort(rig.begin(),rig.end());
/*for (int i = 0; i <lef.size(); i++)
{
    cout<<lef[i]<<endl;
}
for (int i = 0; i <rig.size(); i++)
{
    cout<<rig[i]<<endl;
}*/
int len1=0,len2=0;
while (len1<lef.size()&&len2<rig.size())
{
if(lef[len1]==rig[len2]){sum++;len1++;len2++;}
if(lef[len1]<rig[len2]){len1++;}
if(lef[len1]>rig[len2]){len2++;}
}
cout<<sum+same/2<<endl;
return 0;
}