#include<stdio.h>
struct node
{
    int v;
    struct node *left,*right;
};
struct node* new(int data)
{
    struct node* node=(struct node*)malloc(sizeof(node));
    node->v=data;
    node->left=NULL;
    node->right=NULL;
    return node;
}
int max(int a,int b)
{
    if(a>=b)
    return a;
    else
    return b;
}
int height(struct node* node)
{
    if(node==NULL)
    return 0;
    return 1+max(height(node->left),height(node->right));
}
int diameter(struct node* node)
{
    if(node==NULL)
    return 0;
    return max(1+height(node->left)+height(node->right),max(diameter(node->left),diameter(node->right)));
}
main()
{
    struct node *root=new(1);
    root->left=new(2);
    root->right=new(3);
    root->left->left=new(4);
    root->left->right=new(5);
    printf("%d\n",diameter(root->left->left->left));
    return 0;
}
