#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *left, *right;
};
int max(int a,int b);
struct node* new(int data);
void printlevelorder(struct node* node,int level);
void start(struct node* node);
int height(struct node* node);
void mirror(struct node **node);
struct node* new(int data)
{
    struct node *node;
    node=(struct node*)malloc(sizeof(struct node));
    node->data=data;
    node->left=NULL;
    node->right=NULL;
    return node;
}
int height(struct node* node)
{
    if(node==NULL)
    return 0;
    else
    return max(height(node->right),height(node->left))+1;
}
void printlevelorder(struct node* node,int level)
{
    if(node==NULL)
    return;
    if(level==1)
    printf("%d ",node->data);
    else if(level>1)
    {
        printlevelorder(node->left,level-1);
        printlevelorder(node->right,level-1);
    }

}

void start(struct node* node)
{
    int i,h=height(node);
    for(i=1;i<=h;i++)
    {printlevelorder(node, i);
    printf("\n");}
}
void mirror(struct node **node)
{
    if((*node)==NULL)
    return;
    else
    {
        struct node *p,*q;
        p=(*node)->left;
        q=(*node)->right;
        (*node)->left=q;
        (*node)->right=p;
        mirror(&((*node)->left));
        mirror(&((*node)->right));
    }

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
    root->right->left=new(6);
    root->left->left->left=new(7);
    start(root);
    mirror(&root);
    start(root);
}

