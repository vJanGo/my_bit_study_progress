#include <iostream>

using namespace std;
int fun(int n,int m)
{
    int i,j,k=1,g=1,h,p;
    p=m;

    for(i=1;i<=m;i++)
    {
        k=k*n;
        n=n-1;
    }
    for(j=1;j<=m;j++)
    {
        g=g*p;
        p--;
    }
    h=k/g;
    return h;


}

int main()
{
    int a,b;
    cin>>a>>b;
    if(a>=b) cout <<fun(a,b)<< endl;
    else cout<<"wrong"<<endl;

    return 0;
}