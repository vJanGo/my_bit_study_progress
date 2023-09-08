#include <iostream>
using namespace std;
int main()
{int n,m=0,n1,i;
cin>>n;
while(n>0)
{i=n;
   while(i>0)
   {n1=i%10;
        if(n1==1)
        {m=m+1;
         i=i/10;}
        else
		{i=i/10;}
   }
n--;
}
cout<<m<<endl;
system("pause");
return 0;
}