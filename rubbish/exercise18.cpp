#include<bits/stdc++.h>
typedef struct numLink  
{  
    int no;  
    struct numLink *next;  
}NODE;  
  
NODE *MoveNode( NODE * );  

  
void SetLink( NODE *h )  
{  
    NODE *p=NULL, *q=NULL;  
    int m;  
    while(1)  
    {  
        scanf("%d",&m);  
        if( m == -1 )  
            return ;  
        p = (NODE *)malloc(sizeof(NODE));  
        p->no = m;  
        p->next = NULL;  
        if( h->next == NULL )  
        {  
            h->next = p;  
            q = p;  
        }  
        else  
        {  
            q->next = p;  
            q = q->next;  
        }  
    }  
    return;  
}  
  
int main( )  
{  
    NODE *head=NULL, *q=NULL;  
    head = (NODE *)malloc(sizeof(NODE));  
    head->no = -1;  
    head->next = NULL;  
  
    SetLink( head );  
    q = MoveNode( head );  
    do  
    {  
        printf("%d ",q->next->no);  
        q = q->next;  
    }while( q->next != NULL );   
    printf("\n");  
    return 0;  
}  
NODE *MoveNode( NODE * head){  
    NODE *p,*q,*f,*p1,*q1,*I;  
    p=head->next,q1=head,p1=q1->next;  
    f=q1->next;  
    while(p!=NULL) { if(p->no%2!=0) f=p; p=p->next; }  
    q=f->next,I=f;  
     while(p1!=f){  
        if(p1->no%2==0){  
            q1->next=p1->next;  
            I->next=p1;  
            I=p1;  
            p1->next=q;  
            p1=q1->next;  
         }  
         else q1=q1->next,p1=p1->next;   
     }  
    return head;  
}  