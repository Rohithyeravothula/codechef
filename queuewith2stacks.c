#include<stdio.h>
struct node
{
    int data;
    struct node* next;
};
struct dummy
{
    int data;
    struct dummy* next;
};
struct node* start;  // global pointer so initialized to null
void push(struct node **node, int data)
{
    struct node *p;
    p=(struct node*)malloc(sizeof(struct node));
    p->data=data;
    p->next=(*node);
    (*node)=p;
}
int pop(struct node **node)
{
    int p= (*node)->data;
    (*node)=(*node)->next;
    return p;
}
void dpush(struct dummy **dummy,int data)
{
    struct dummy* p;
    p=(struct dummy*)malloc(sizeof(struct dummy));
    p->data=data;
    p->next=(*dummy);
    (*dummy)=p;
}
int dpop(struct dummy **dummy)
{
    int p= (*dummy)->data;
    (*dummy)=(*dummy)->next;
    return p;
}
void enqueue(int data)
{
push(&start,data);
}
void dequeue()
{
    if(start!=NULL)
    {
    struct dummy *dstart;
    dstart=(struct dummy*)malloc(sizeof(struct dummy));
    dstart->next=NULL;
    dstart->data=-1;
    while(start!=NULL)
    {
        dpush(&dstart,pop(&start));
    }
    dpop(&dstart);
    while(dstart!=NULL)
    {
        push(&start,dpop(&dstart));
    }
    int c=pop(&start);
    }
    else
    {
        printf("empty queue\n");
    }
}
main()
{
    int i=0;
    while(i<10)
    {
        enqueue(i);
        i=i+1;
    }
    dequeue(&start);
    dequeue(&start);
    dequeue(&start);
    dequeue(&start);
    dequeue(&start);
    dequeue(&start);
    dequeue(&start);
    dequeue(&start);
    dequeue(&start);
    dequeue(&start);
    while(start!=NULL)
    {printf("%d\n",start->data);
    start=start->next;}
    return 0;
}
