#include<iostream>
using namespace std; 
int light[20][20];
int cal[20][20];
int total=1000;
void op(int a[][20],int i,int j,int n,int m)//操作
{
a[i][j]^=1;    
if (j + 1 <m)a[i][j+1]^=1;
if (j - 1 >= 0)a[i][j-1]^=1;
if (i + 1 <n)a[i+1][j]^=1;
if (i - 1 >= 0)a[i-1][j]^=1;
}
int right(int n,int m)
{int i,j;
    for ( i = 0; i <n; i++)
{
    for ( j = 0; j <m; j++)
    {
    if(cal[i][j]==1)return true;
    }
    
}
return false;
}
int calculate(int n,int m)
{int step=0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cal[i][j] = light[i][j];

for (int i = 0; i <n-1; i++)
{
for (int j = 0; j < m; j++) {
            if (cal[i][j] == 1) {
                step++;
                op(cal, i + 1, j,n,m);
            }
}
}
if(right(n,m))return -1;
return step; 
}
void dfs(int step,int num,int n,int m)//深度优先搜索
{
if(step==m)
{
int tmp = calculate(n,m);
if(tmp==-1)return;//无解
if(tmp+num<total)total=num+tmp;
return;
}//枚举完成！
op(light,0,step,n,m);

dfs(step+1,num+1,n,m);
op(light,0,step,n,m);
dfs(step+1,num,n,m);//按回去==没按
}
int main()
{
int n,m,i,j;
cin>>n>>m;
getchar();
for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
            char c;
            c = getchar();
            light[i][j] = c - '0';
        }
        getchar(); 
    }
dfs(0,0,n,m);
cout<<total<<endl;
return 0;
}