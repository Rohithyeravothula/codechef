#include<stdio.h>
struct node{int data;
struct node* next;
};
struct node* new(int data)
{
    struct node* node;
    node=(struct node*)malloc(sizeof(struct node));
    node->data=data;
    node->next=NULL;
    return node;
}
void ch(struct node **p,int k)
{
    int i,n=number(*p);
    if(k>n/2)
    k=k-n/2;
    struct node *a,*b,*c,*d,*e;
    a=*p;
    i=0;
    while(i<k)
    {
        a=a->next;
        i++;
    }
    b=a;  // k node from first
    i=0;
    a=*p;
    while(i<(n-k))
    {
        a=a->next;
        i++;
    }
    c=a;  // k node from last
    d=b->next;
    e=c->next;
    i=0;
    while(i<k-1)
    {
        (*p)=(*p)->next;
        i++;
    }
    (*p)->next=c;
    (*p)->next->next=d;
    while(i<(n-2*k))
    {
        i++;
        (*p)=(*p)->next;
    }
    (*p)->next=b;
    (*p)->next->next=e;
}
int number(struct node* node)
{
    int c=0;
    while(node!=NULL)
    {
        //printf("%d\n",node->data);
        node=node->next;
        c++;
    }
    return c;
}
main()
{
    struct node *root, *p;
    p=new(1);
    root=p;
    int i=2,k;
    while(i<10)
    {
        p->next=new(i);
        p=p->next;
        i++;
    }
    scanf("%d",&k);
    p=root;
    ch(&p,k);
    while(root!=NULL)
    {
        printf("%d\n",root->data);
        root=root->next;
    }
    return 0;
}
