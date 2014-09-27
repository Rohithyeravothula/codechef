#include<stdio.h>
struct node
{
    int data;
    struct node* next;
};
void new(struct node **node, int d)
{
    struct node* p;
    (*node)=(struct node*)malloc(sizeof(struct node));
    p=*node;
    (*node)->data=d;
    (*node)->next=NULL;
    *node=p;

}
main()
{
    struct node *node;
    new(&node,1);
    new(&node,2);
    printf("%d\n",node->data);
    return 0;

}
