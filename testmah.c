#include<stdio.h>
struct node
{
    int data;
    struct node* next;
};
struct node* new(int t)
{
    struct node* node;
    node=(struct node*)malloc(sizeof(struct node));
    node->data=t;
    node->next=NULL;
    return node;
}
main()
{
    struct node* root, *start;
    start=new(10);
    root=start;
    int i=0;
    while(i<10)
    {
        i=i+1;
        start->next=new(i);
        start=start->next;
    }
    while(root!=NULL)
    {
        printf("%d\n",root->data);
        root=root->next;
    }
}

