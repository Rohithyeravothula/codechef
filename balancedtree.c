#include<stdio.h>
struct node{int data;
struct node *left, *right;
};
struct node* new(int data)
{
    struct node* node;
    node=(struct node*)malloc(sizeof(struct node));
    node->data=data;
    node->left=NULL;
    node->right=NULL;
    return node;
}
int balence(struct node* node)
{
    if(node==NULL)
    return 1;
    else
    {
        int c;
        if(abs(height(node->left)-height(node->right))<=1)
           c=1;
        return ((balence(node->left))&(balence(node->right)))&c;
    }
}
int height(struct node* node)
{
    if(node==NULL)
    return 0;
    else
    return max(height(node->left),height(node->right))+1;
}
int max(int a,int b)
{
    if(a>=b)
    return a;
    else
    return b;
}
main()
{
    struct node* root;
    root=new(1);
    root->left=new(2);
    root->right=new(3);
    root->left->left=new(4);
    root->left->right=new(5);
    printf("%d\n",balence(root));
}
