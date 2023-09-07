/*
 * @Author: vJanGo
 * @Date: 2023-09-05 16:52:11
 * @FilePath: \languageCworks\smalllexue24.cpp
 * @Description: 小学期-绳子切割
 * 
 */
#include<iostream>
#include<vector>
#include<algorithm>
using namespace  std;
vector<int>rope;
int num;int n;
bool calculate(int k) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (rope[i] > 0) {  
            count += rope[i] / k;
        }
    }
    if (count >= num) return true;
    else return false;
}
int BinarySearch(int left, int right, int max_length)
{
    if (left == right)return max_length;
    
    int mid = (left + right) / 2;
     if (left == mid||right==mid)return max_length;
    bool flag = calculate(mid);
    
    if (flag)
    {
        max_length = max_length > mid ? max_length : mid;
        return BinarySearch(mid , right, max_length); 
    }
    else
    {
        return BinarySearch(left, mid, max_length);
    }
}

int main()
{
    int tmp;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
    cin>>tmp;
    rope.push_back(tmp);
    }
    cin>>num;
    sort(rope.begin(),rope.end());
    int left=0;
    int right=rope.back();
    //边界检验
    if(calculate(right)){cout<<right<<endl;return 0;}
    int len=BinarySearch(left,right,-1);
    if(len==-1)cout<<0<<endl;
    else cout<<len<<endl;
    return 0;
}