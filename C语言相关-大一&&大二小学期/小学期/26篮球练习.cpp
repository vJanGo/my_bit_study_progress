#include<iostream>
using namespace std;
long long step[21][21]={0};
int main()
{
    int n,m,cx,cy;
    cin>>n>>m>>cx>>cy;
    if(cx==0&&cy==0)step[0][0]=0;
    else if(cx==1&&cy==2)step[0][0]=0;
    else if(cx==2&&cy==1)step[0][0]=0;
    else step[0][0]=1;
    for (int i = 0; i <=n; i++)
    {
        for(int j=0;j<=m;j++)
        {
        if((i==cx-2&&j==cy-1)||(i==cx+2&&j==cy-1)||(i==cx+2&&j==cy+1)||(i==cx-2&&j==cy+1)
          ||(i==cx-1&&j==cy-2)||(i==cx+1&&j==cy-2)||(i==cx-1&&j==cy+2)||(i==cx+1&&j==cy+2)
          ||(i==cx&&j==cy))
        continue;
        else
        {
        if(i)step[i][j]+=step[i-1][j];
        if(j)step[i][j]+=step[i][j-1];
        }
        }
    }
    cout<<step[n][m]<<endl;
    /*for (int i = 0; i <=n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            cout<<step[i][j]<<" ";
        }
        cout<<endl;
    }
    */
    return 0;
}