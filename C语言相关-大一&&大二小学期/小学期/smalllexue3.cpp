#include<iostream>
#include<math.h>
using namespace std;
int convert(long long a)
{
    float r=log(a)/log(2);
    if(r!=(int)r)r++;
    return (int)r;
}
int main()
{   long long t;
    cin>>t;
    for (int i = 0; i <t; i++)
    {
    long long a;
    cin>>a;
    cout<<convert(a)<<endl;
          
    }
    return 0;
}