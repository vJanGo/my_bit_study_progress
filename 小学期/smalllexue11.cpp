#include<iostream>
#include<math.h>
#include<cstdlib>
using namespace std;
typedef  long long int ll;
ll h[100010];
ll l[100010];
int comp(const void*a, const void*b)
{
     return *(int *)a - *(int *)b;
}
void kp(ll a[],ll l,ll r)
{
if(l>=r)return;
ll key = a[l],i=l,j=r;
while (i<j)
{
	while(a[j]>=key&&i<j)j--;
	while(a[i]<=key&&i<j)i++;
	swap(a[i],a[j]);
}
swap(a[l],a[i]);
kp(a,l,i-1);
kp(a,i+1,r);
}
void cp(ll a[],ll lenth)
{
ll j;
for(j=1;j<lenth;j++)
{   ll key=a[j];
    ll i=j-1;
    while (i>=0&&a[i]>key)
    {
        a[i+1]=a[i];
        i--;
    }
    a[i+1]=key;
}
}
void ShellSort(ll *a, ll len)
{
	ll h = 1;
	while( h<len ) 
		h = 3*h + 1;
	while( h>0 )
	{
		for (ll j=h; j<len; j++)
		{
			ll key = a[j];
			ll i = j-h;
			while( i>=0 && a[i]>key )
			{
				a[i+h] = a[i];
				i = i-h;
			}
			a[i+h] = key;
		}
		h  = h/3;
	}
}
ll distance(ll x1,ll x2)
{if(x1-x2>0)return x1-x2;
else return x2-x1;
}
int main()
{
    int n,i;
    cin>>n;
    for ( i = 0; i <n; i++)
    {
    scanf("%lld %lld",&h[i],&l[i]);
    }
    qsort(l, n, sizeof(ll), comp);
    qsort(h, n, sizeof(ll), comp);
    for ( i = 0; i < n; i++)
    {
    h[i]=h[i]-i;
    }
    qsort(h, n, sizeof(ll), comp);
    ll mid=0;
    if((n-1)%2==0)mid=(n-1)/2;
    else mid=(n-1)/2+1;
    ll dis=0;
    for ( i = 0; i <n; i++)
    {
    dis+=distance(l[i],l[mid])+distance(h[i],h[mid]);
    }
    printf("%lld\n",dis);
    return 0;
}