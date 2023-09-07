#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct peo
{
	char name[20];
	char score[1000];
}peo1[1000];
int cmp(const void *a , const void *b)
{
	struct peo *c=(peo*)a;
	struct peo *d=(peo*)b;
	if(strlen((char*)c->score)<strlen((char*)d->score))
	{
		return 0;
	}
		else if(strlen((char*)c->score)==strlen((char*)d->score))
		{
			if(strcmp((char*)c->score,(char*)d->score)<0)
			{
				return 0;
			}
			else if(strcmp((char*)c->score,(char*)d->score)==0)
			{
				return strcmp((char*)c->name,(char*)d->name)<0;
				return 1;
			}
		}
	
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",peo1[i].name);
		scanf("%s",peo1[i].score);
	}
	qsort(peo1,n,sizeof(peo1),cmp);
	for(int i=0;i<n;i++)
    {
        printf("%s\n",peo1[i].name);
    }
    return 0;

}