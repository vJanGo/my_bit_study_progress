/* PRESET CODE BEGIN - NEVER TOUCH CODE BELOW */  
 
#include "stdio.h"  
#include "stdlib.h"  
  
struct node  
{   int data;  
    struct node * next;  
} ;  
  
typedef struct node NODE;  
typedef struct node * PNODE;  
void outlist( PNODE );  
void sortlist( PNODE h, int num ) 
{   
    PNODE p,tmp; 
    p = (PNODE)malloc( sizeof(NODE) ); 
    p->data = num; 
    tmp=h;
    while(tmp->next!=NULL)
    {
    if(num<=(tmp->data))break;
    tmp=tmp->next;
    }
    if(num==tmp->data)free(p);
    else if(num>tmp->data)
    {
        p->next=NULL;
        tmp->next=p;
    }
    else if(num<tmp->data)
    {
    int temp=tmp->data;
    tmp->data=num;
    p->next=tmp->next;
    tmp->next=p;
    (p->data)=temp;

    }
}
int main ( )  
{   int num=1;  
    PNODE head;  
  
    head = (PNODE)malloc( sizeof(NODE) );  
    head->next = NULL;  
    head->data = -1;  
  
    while ( num!=0 )  
    {   scanf("%d", &num);  
        if ( num!=0 )  
            sortlist( head, num);  
    }  
    outlist( head );  
    return 0;  
}  
  
void outlist( PNODE head )  
{   PNODE p;  
    p = head->next;  
    while ( p != NULL )  
    {   printf("%d\n", p->data);  
        p = p->next;  
    }  
}  
  