#include<stdio.h>
struct node
{
    int data;
    struct node *left, *right;
};
struct stacknode
{
    struct node* node;
    struct stacknode* next;
};
void push(struct stacknode **p, struct node* node)
{
    struct stacknode *q;
    q=(struct stacknode*)malloc(sizeof(struct stacknode));
    q->node=node;
    q->next=(*p);
    (*p)=q;
}
struct node* pop(struct stacknode **p)
{
    struct node* node=(*p)->node;
    (*p)=(*p)->next;
    return node;
}
struct node* new(int data)
{
    struct node* p=(struct node*)malloc(sizeof(struct node));
    p->data=data;
    p->left=NULL;
    p->right=NULL;
    return p;
}
struct node *p,*root;
struct stacknode *start;
main()
{
    p=new(1);
    p->left=new(2);
    p->right=new(3);
    p->left->left=new(4);
    p->left->right=new(5);
    return 0;
}
