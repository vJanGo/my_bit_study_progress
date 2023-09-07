/*#include<stdio.h>
#include<string.h>
int a[101],b[101],n,ans,i;
void init(int a[]){//读取字符串并逆序转换为数组 
	char s[101];
	scanf("%d",&n);
    scanf("%s",&s);
    memset(a,0,sizeof(a));
	a[0]=strlen(s);
	for(i=1;i<=a[0];i++)
		if(s[a[0]-i]>='0'&&s[a[0]-i]<='9')	a[i]=s[a[0]-i]-'0';
		else a[i]=s[a[0]-i]-'A'+10;
} 
int check(int a[]){//判断是否回文数 
	for(i=1;i<=a[0];i++)
		if(a[i]!=a[a[0]-i+1]) return 0;
	return 1;
} 
void jia(int a[]){//加法运算函数 
	int i,k;
	for(i=1;i<=a[0];i++) b[i]=a[a[0]-i+1];//逆序存储 
	for(i=1;i<=a[0];i++) a[i]+=b[i];//按位求和 
	for(i=1;i<=a[0];i++){//进位处理 
		a[i+1]+=a[i]/n;
		a[i]%=n;
	}
	if(a[a[0]+1]>0) a[0]++;//修正长度 
} 
int main()
{
	init(a);
	if(check(a)){
		return 0;
	}
	ans=0;
	while(ans<=30){
		ans++;
		jia(a);
		if(check(a)){
			printf("STEP=%d\n",ans);
			return 0;
		}
	}
	printf("Impossible\n");
	return 0;
 } 
 #include <bits/stdc++.h>
using namespace std;

int to_number(char alpha);
char to_char(int number);
string addtion(int N,string M);
bool match(string str);
int main()
{
    int N;
    string M;

    cin>>N>>M;
    int cnt =0;
    while(!(match(M)))
    {

        M=addtion(N,M);
        if(cnt++==30) {
            cout<<"Impossible!"<<endl;
            return 0;
        }

    }

    cout<<"STEP="<<cnt<<endl;
    return 0;
}

int to_number(char alpha)//字符变数字
{
    if(alpha>'9')
    {
        return alpha-'A' +10;
    }else
    {
        return alpha-'0';
    }
}

string addtion(int N,string M)
{
    string str;
    int loss=0;//定义进位符号，模拟加法
    int cnt=0;//跟随数据的位数自增
    for(string::iterator i= M.begin(),j = M.end()-1;i!=M.end();i++,j--)//迭代器，可以有效的检索全部元素而且没有数组越界风险
    {
      int middle;
      middle=to_number(*i)+to_number(*j)+loss;

        if(middle>=N)
        {
            str.push_back(to_char(middle%N));
            loss=1;
        }
        else
        {
            str.push_back(to_char(middle));
            loss =0;
        }

    }
    if(loss)
        str.push_back('1');
    reverse(str.begin(),str.end());
    return str;
}
char to_char(int number)
{
    if(number>=10)
        return number+'A'-10;
    else
        return number+'0';
}
bool match(string str)
{
    
    string s = str;

    reverse(s.begin(),s.end());

    if(s==str)
        return true;

    return false;
}
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
 
int hui(int len, char m[101]) {
    for (int i = 0; i < len; i++) {
        if (m[i] != m[len - 1 - i]) return 0;
    }
    return 1;
};
void decTon(int n, char m[], long long int sum) {
    int i = 0;
    while (sum) {
 
        if (n == 16 && (sum % n) >= 10) {
            m[i] = (sum % n) + 'A' - 10;
        }
        else {
            m[i] = (sum % n) + '0';
        }
        sum /= n;
        i++;
    }
    int l = 0, r = i - 1;
    while (l < r) {
        char tmp = m[l];
        m[l] = m[r];
        m[r] = tmp;
        l++;
        r--;
    }
 
}
//3602001953
long long int nToDec(int n, char m[101], int len) {
    long long int sum = 0;
    if (n == 10) {
        for (int i = 0; i < len; i++) {
            int r = m[i] - '0';
            sum = sum * 10 + r;
        }
    }
    else {
        for (int i = len - 1; i >= 0; i--) {
            int r = 0;
            if (n == 16 && m[i] >= 'A') {
                r = m[i] - 'A' + 10;
            }
            else {
                r = m[i] - '0';
 
            }
 
 
            int tmp = r * pow(n, len - 1 - i);
            sum += tmp;
        }
    }
    return sum;
}
void addhui(int n, char m[], int len) {
    char mm[101] = { 0 };
 
    for (int i = 0; i < len; i++) {
        mm[len - 1 - i] = m[i];
    }
    int lenmm = len;
    
    long long int sum = nToDec(n, m, len) + nToDec(n, mm, lenmm);
    
    decTon(n, m, sum);
    
 
}
 
 
int main() {
    int n, step = 0,len = 0;
    char m[101] = { 0 };
    scanf("%d %s", &n, m);
    len = strlen(m);
    while (len = strlen(m), hui(len, m) == 0) {
       
        step++;
       
        if (step >= 30) break;
        addhui(n, m, len);
        
    }
    if (step < 30) printf("STEP=%d", step);
    else printf("Impossible!");
 
    return 0;
}
