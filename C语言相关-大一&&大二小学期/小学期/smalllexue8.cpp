#include<iostream>
#include<cstring>
using namespace std;
char str[2000][2000]={};
bool compare(int n)
{
for (int i = 0; i < n; i++)
{
    if(strcmp(str[i],str[n])==0)return false;
}
return true;
}
int main()
{
    int n;
    cin>>n;
    int i;
    int total=0;
    getchar();
    for(i=0;i<n;i++)
    {
    gets(str[i]);
    if(strlen(str[i])<=10)continue;
    if(compare(i))total++;
    }
    cout<<total<<endl;
    return 0;
}