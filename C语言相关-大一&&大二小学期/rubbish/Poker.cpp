#include<stdio.h>
struct PAI
{
char n;
char c;
int z;
};
void check(PAI pai[3])
{
char tempn,tempc;
int tempz;
for(int i=0;i<2;i++)
{
for (int j = 0; j<2-i; j++)
{
    if(pai[j].z<pai[j+1].z)
    {
    tempn=pai[j].n;
    pai[j].n=pai[j+1].n;
    pai[j+1].n=tempn;
    tempc=pai[j].c;
    pai[j].c=pai[j+1].c;
    pai[j+1].c=tempc;
    tempz=pai[j].z;
    pai[j].z=pai[j+1].z;
    pai[j+1].z=tempz;
    }
}
}
}
int main()
{   PAI pai1[3];
    PAI pai2[3];
    int count=0;
    int max1=0,max2=0;
    while(count<3)
    {
    scanf("%c",&pai1[count].n);
    while(pai1[count].n==' ')
    {continue;}
    if(pai1[count].n=='H')pai1[count].z+=4;
    else if(pai1[count].n=='S')pai1[count].z+=3;
    else if(pai1[count].n=='D')pai1[count].z+=2;
    else if(pai1[count].n=='C')pai1[count].z+=1;
    else {printf("Input Error!\n");return 0;}
    scanf("%c",&pai1[count].c);
    while(pai1[count].c==' ')continue;
    if(pai1[count].c=='A')pai1[count].z+=1;
    else if(pai1[count].c=='J')pai1[count].z+=11;
    else if(pai1[count].c=='Q')pai1[count].z+=12;
    else if(pai1[count].c=='K')pai1[count].z+=13;
    else if((pai1[count].c>='1')&&(pai1[count].c<='9'))pai1[count].z+=pai1[count].c-'0';
    else {printf("Input Error!\n");return 0;}
    max1=max1>pai1[count].z?max1:pai1[count].z;
    count++;
    }
    check(pai1);
    if((pai1[0].n==pai1[1].n)&&(pai1[0].c==pai1[1].c)){printf("Input Error!\n");return 0;}
    if((pai1[0].n==pai1[2].n)&&(pai1[0].c==pai1[2].c)){printf("Input Error!\n");return 0;}
    if((pai1[2].n==pai1[1].n)&&(pai1[2].c==pai1[1].c)){printf("Input Error!\n");return 0;}
    count=0;
    while(count<3)
    {
    scanf("%c",&pai2[count].n);
    while(pai2[count].n==' ')continue;
    if(pai2[count].n=='H')pai2[count].z+=4;
    else if(pai2[count].n=='S')pai2[count].z+=3;
    else if(pai2[count].n=='D')pai2[count].z+=2;
    else if(pai2[count].n=='C')pai2[count].z+=1;
    else {printf("Input Error!\n");return 0;}
    scanf("%c",&pai2[count].c);
    while(pai2[count].c==' ')continue;
    if(pai2[count].c=='A')pai2[count].z+=1;
    else if(pai2[count].c=='J')pai2[count].z+=11;
    else if(pai2[count].c=='Q')pai2[count].z+=12;
    else if(pai2[count].c=='K')pai2[count].z+=13;
    else if((pai2[count].c>='1')&&(pai2[count].c<='9'))pai2[count].z+=pai2[count].n-'0';
    else {printf("Input Error!\n");return 0;}
    max2=max2>pai2[count].z?max2:pai2[count].z;
    count++;
    }
    check(pai2);
    if((pai2[0].n==pai2[1].n)&&(pai2[0].c==pai2[1].c)){printf("Input Error!\n");return 0;}
    if((pai2[0].n==pai2[2].n)&&(pai2[0].c==pai2[2].c)){printf("Input Error!\n");return 0;}
    if((pai2[2].n==pai2[1].n)&&(pai2[2].c==pai2[1].c)){printf("Input Error!\n");return 0;}
    if (max1>max2)printf("Winner is A!\n");
    else if(max1<max2)printf("Winner is B!\n");
    else printf("Winner is X!\n");
    printf("A:");
    for(int i = 0; i <3; i++)
    printf(" %c%c",pai1[i].n,pai1[i].c);
    printf("\n");
    printf("B:");
    for(int i = 0; i <3; i++)
    printf(" %c%c",pai2[i].n,pai2[i].c);
    printf("\n");
}
