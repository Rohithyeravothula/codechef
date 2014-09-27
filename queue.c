#include<stdio.h>
struct node
{
    int data;
    struct node* next;
};
struct node* start;
struct node* new(int data)
{
    struct node* node;
    node=(struct node*)malloc(sizeof(struct node));
    node->data=data;
    node->next=NULL;
    return node;
}
main()
{
    struct node* root;
    root=start;
    int i=10;
    while(i<10)
    {
        start->next=new(i);
        i=i+1;
    }
    while(root!)

}
