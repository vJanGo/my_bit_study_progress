#include <stdio.h>  
#include <stdlib.h>  
typedef struct numLink  
{  
    int no;  
    struct numLink *next;  
}NODE;  
  
NODE *MoveNode( NODE *head ){
	NODE* q;
	NODE* p=head;
	NODE* qm=head;
	NODE* s;
	while(qm->next!=NULL)qm=qm->next;
	q=qm;
	while(1){
		if(p->next->no%2==0){
			q->next=p->next;
			q=q->next;
			s=p->next->next;
			p->next=s;
		}
		if(p->next==qm)break;
		p=p->next;
	}
	q->next=NULL;
	return head;
} 
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