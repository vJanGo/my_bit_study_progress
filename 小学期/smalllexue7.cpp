#include<iostream>
#include<string.h>
using namespace  std;
char a[4000], b[4000], c[4000];
void move(char a[],int a_site,int b_site)
{
int move_way = a_site - b_site;
        for (int j = 1000; j >= 0; j--)
        {
            a[j + move_way] = a[j];
            b_site = a_site;
        }
        for (int j = 0; j < move_way; j++)
        {
            a[j] = '\0';
        }
}
int main()
{
    int a_num, b_num, c_num, ifa = 0, ifb = 0, a_site, b_site;
 
    memset(a, '\0', sizeof(a));
    memset(b, '\0', sizeof(b));
    memset(c, '\0', sizeof(c));
    cin>>a>>b;
    for (int i = 0; i < 1000; i++)
    {
        if(a[i] == '.')
        {
            ifa = 1;
            a_site = i;
        }
        if(b[i] == '.')
        {
            ifb = 1;
            b_site = i;
        }
 
    }    
    if(ifa == 0)
    {
        int i = 0;
        while(i++ <= 1000)
        {
            if(a[i] == '\0')
            {
                a[i] = '.';
                a_site = i;
                break;
            }
        }
    }
    if(ifb == 0)
    {
        int i = 0;
        while(i++ <= 1000)
        {
            if(b[i] == '\0')
            {
                b[i] = '.';
                b_site = i;
                break;
            }
        }
    }
    if(a_site>b_site)move(b,a_site,b_site);
    else if(a_site<b_site)move(a,b_site,a_site);
    for (int i = 3998; i >= 0; i--)
    {
        a[i + 1] = a[i];
        b[i + 1] = b[i];
    }
    a[0] = '\0';
    b[0] = '\0';
    int carry = 0;
    for (int i = 3999; i >= 0; i--)
    {
        if(a[i] == '.')
        {
            c[i] = '.';
            continue;
        }
        if(a[i]=='\0')a_num=0;
        else if(a[i]>='0'&&a[i]<='9')a_num=a[i]-'0';
        if(b[i]=='\0')b_num=0;
        else if(b[i]>='0'&&b[i]<='9')b_num=b[i]-'0';
        c_num = a_num + b_num + carry;
        c[i] = c_num % 10 + '0';
        carry = c_num / 10;
    }
    int k = 0;
    int first_a = -1, last_a = -1, lenth_a, first_b = -1, last_b = -1, lenth_b, first_c = -1, last_c, lenth_c,last_c_1,first_c_1 = -1;
    k = 0;
    while(a[k] != '.')
    {
        if(a[k]!= '\0')
        {
            first_a = k;
            break;
        }
        k++;
    }
    if(first_a == -1)
    {
        first_a = k - 1;
    }
    k = 0;
    while (b[k] != '.')
    {
        if(b[k]!= '\0')
        {
            first_b = k;
            break;
        }
        k++;
    }
    if(first_b == -1)
    {
        first_b = k - 1;
    }
    k = 0;
    while (c[k] != '.')
    {
        if(c[k] != '0' && c[k] != '\0')
        {
            first_c_1 = k;
            break;
        }
        k++;
    }
    if(first_c_1 == -1)
    {
        first_c_1 = k - 1;
    }
        k = 3999;
        while(a[k] != '.')
        {
            if(a[k] != '\0')
            {
                last_a = k;
                break;
            }
            k--;
        }
        if(last_a == -1)
            last_a = k;
    k = 3999;
    while(b[k] != '.')
    {
        if(b[k] != '\0')
        {
            last_b = k;
            break;
        }
        k--;
    }
    if(last_b == -1)
        last_b = k;
 
        
    k = 1999;
    while(c[k] != '.')
    {
        if(last_b > last_a)
            last_c_1 = last_b;
        else
            last_c_1 = last_a;
        k--;
    }
    lenth_a = last_a - first_a;
    lenth_b = last_b - first_b;
    if(first_a < first_b)
        first_c = first_a;
    else
        first_c = first_b;
    if(last_a < last_b)
        last_c = last_b;
    else
        last_c = last_a;
 
    lenth_c = last_c - first_c;
    if(ifa == 0)  a[a_site+1] = '\0';
    if(ifb == 0) b[b_site+1] = '\0';
    if(ifb == 0)
        last_b--;
    if(ifa == 0)
        last_a--;
    if(ifa == 0 && ifb == 0)
        lenth_c--;
    int flagend = 0;
    if(first_c_1 < first_a &&first_c_1 < first_b)
        flagend = 1;
        if (first_a < first_b)
        {
            if(flagend == 1)
                putchar(' ');
            printf("   ");
            for (int i = first_a; i <= last_a; i++)
                putchar(a[i]);
            if (last_a > last_b)
            {
                printf("\n");
            }
            else
            {
                for (int i = 0; i < last_b - last_a; i++)
                    printf(" ");
                printf("\n");
            }
        }
        else
        {
            if(flagend == 1)
                putchar(' ');
            for (int i = 0; i < first_a - first_b + 3; i++)
                printf(" ");
            for (int i = first_a; i <= last_a; i++)
                putchar(a[i]);
            if (last_a > last_b)
            {
                printf("\n");
            }
            else
            {
                for (int i = 0; i < last_b - last_a; i++)
                    printf(" ");
                printf("\n");
            }
        }
    printf("+");
    if(first_a > first_b)
    {
        if(flagend == 1)
                putchar(' ');
        printf("  ");
        for (int i = first_b; i <= last_b; i++)
            putchar(b[i]);
        if(last_a < last_b)
        {
            printf("\n");
        }
        else
        {
            for (int i = 0; i < last_a-last_b; i++)
                printf(" ");
            printf("\n");
        }
    }
    else
    {
        if(flagend == 1)
                putchar(' ');
        for (int i = 0; i < first_b - first_a + 2; i++)
            printf(" ");
        for (int i = first_b; i <= last_b; i++)
            putchar(b[i]);
        if(last_a < last_b)
        {
            printf("\n");
        }
        else
        {
            for (int i = 0; i < last_a-last_b; i++)
                printf(" ");
            printf("\n");
        }
    }
    for (int i = 0; i < lenth_c+4; i++)
        putchar('-');
    if(flagend == 1)
                putchar('-');
    putchar('\n');
    if(flagend == 1)
                putchar(' ');
    for (int i = 0; i < first_c_1 - first_c + 3; i++)
        printf(" ");
        if (ifa == 0 && ifb == 0)
        {
            for (int i = first_c_1; i < last_c; i++)
                putchar(c[i]);
            putchar('\n');
        }
        else
        {
            for (int i = first_c_1; i<=last_c_1; i++)
        putchar(c[i]);
    putchar('\n');
    }
    return 0;
}