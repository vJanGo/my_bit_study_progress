#include<iostream>
using namespace std;
long long a[1000000];long long sum;
int main()
{
    long long n,h;  
    cin>>n>>h;
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(long long i=1;i<n;i++)
    {
    if(a[i]>a[i-1])sum+=a[i]-a[i-1];
    }
    sum+=h-a[n-1];
    cout<<sum<<endl;
    return 0;
}