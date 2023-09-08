#include<stdio.h>
#include<string.h>
struct stu
    {
        char name[20];
        int score;
    }student[100];
void convert(char *name,int count)
{
    int tmp=0;
for (int i = 0; name[i]!='\0'; i++)
{
 if(name[i]==',')
 {
    for (int j =i+1; name[j]!='\0' ; j++)
    {
        tmp=(name[j]-'0')+10*tmp;
    }
 name[i+1]='\0';
 }
}
student[count].score=tmp;
}
int main()
{
    int n;
    scanf("%d",&n);
    for (int i = 0; i <n; i++)
    {
     scanf("%s",student[i].name);
     convert(student[i].name,i);
    }
    int tmp;
    char tmp1[20];
    for (int i = 0; i < n-1; i++)
    {
       for (int j = 0; j<n-i-1; j++)
       {
       if(student[j].score<student[j+1].score)
       {
        tmp=student[j].score;
        student[j].score=student[j+1].score;
        student[j+1].score=tmp;
        strcpy(tmp1,student[j].name);
        strcpy(student[j].name,student[j+1].name);
        strcpy(student[j+1].name,tmp1);
       }
       }
    }
    for (int i = 0; i <n; i++)
    {
        printf("%s%d\n",student[i].name,student[i].score);
    }
    return 0;
}