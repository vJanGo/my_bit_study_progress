#include<iostream>  
#include<stdlib.h>  
using namespace std;  
typedef long long ll;  
ll task[300000][2];  
int cmp(const void*a,const void*b)  
{  
return ((int *)a)[0] - ((int *)b)[0];  
}  
int main()  
{  
    int n,i;  
    cin>>n;  
    for ( i = 0; i<n; i++)  
    {  
        cin>>task[i][1]>>task[i][0];  
    }  
    qsort(task,n,sizeof(ll)*2,cmp);  
      
    ll sum=0;  
    ll endtime=-1;  
    for ( i = 0; i < n; i++)  
    {  
    if(endtime<=task[i][1])  
    {  
        sum++;endtime=task[i][0];  
    }  
    }  
      
    cout<<sum<<endl;  
      
    return 0;  
} 