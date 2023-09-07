#include <iostream>
#include <stdlib.h>
using namespace std;
struct _ball
{
    long long a;
    long long b;
    long long c;
    long number;
} ball[100010];
int cmp(const void *a, const void *b)
{
    struct _ball x = *(struct _ball *)a;
    struct _ball y = *(struct _ball *)b;
    if(x.a != y.a)
    {
        return x.a - y.a;
    }
    
    else
    {
        if(x.b!=y.b)
            return x.b - y.b;
        
        else
        {
            return x.c - y.c;
        }
        
    }
}
void px(int i)
{long long int t;
     if(ball[i].a < ball[i].b)
        {
            t = ball[i].a;
            ball[i].a = ball[i].b;
            ball[i].b = t;
        }
        if(ball[i].b < ball[i].c)
        {
            t = ball[i].b;
            ball[i].b = ball[i].c;
            ball[i].c = t;
        }
        if(ball[i].a < ball[i].b)
        {
            t = ball[i].b;
            ball[i].b = ball[i].a;
            ball[i].a = t;
        }
}
int main()
{
    long n;
    cin>>n;
    for (long i = 0; i < n; i++)
    {
        
        cin>>ball[i].a>>ball[i].b>>ball[i].c;
        ball[i].number = i;
        px(i);
    }
    qsort(ball, n, sizeof(struct _ball), cmp);
    long long max = -1, max1 = -1, max2 = -1;
    long long p1, p0, p2;
    for (long i = 0; i < n; i++)
    {
        if(ball[i].c > max)
        {
            max = ball[i].c;
            p0 = ball[i].number;
        }
            
    }
    for (long i = 0; i < n-1; i++)
    {
        if(ball[i].a == ball[i+1].a && ball[i].b == ball[i+1].b)
        {
            max2 = ball[i].c + ball[i + 1].c;
            if(ball[i].b < max2)
            {
                max2 = ball[i].b;
            }
            if(max2 > max1)
            {
                p1 = ball[i].number;
                p2 = ball[i+1].number;
                max1 = max2;
            }
            else
                continue;
        }
    }
    if(max >= max1)
    {
       cout<<1<<endl<<p0+1<<endl;
    }
    
    else
    {
        cout<<2<<endl<<p2+1<<" "<<p1+1<<endl;
    }
    
}