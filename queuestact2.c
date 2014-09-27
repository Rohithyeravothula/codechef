#include<stdio.h>
struct node
{int data;
struct node* next;
};
struct node* start;
struct node* end;
struct dummy
    {
        int data;
        struct dummy* next;
    };
void push(struct node **node,int t)
{
    struct node* p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=t;
    p->next=(*node);
    (*node)=p;
}
void dpush(struct dummy* )
main()
{
    start=(struct node*)malloc(sizeof(struct node));
    start->data=3;
    start->next=NULL;
    push(&start,2);
    push(&start,4);
}
