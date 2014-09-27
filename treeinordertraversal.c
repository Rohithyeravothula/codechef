#include<stdio.h>
struct node
{
    int data;
    struct node *left,*right;
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
int height(struct node* node)
{
    if(node==NULL)
    return 0;
    else
    return max(1+height(node->left),1+height(node->right));
}
int max(int a,int b)
{
    if(a>=b)
    return a;
    else
    return b;
}
void inorder(struct node* node)
{
    if((node->left)!=NULL)
    inorder(node->left);
    printf("%d ",node->data);
    if((node->right)!=NULL)
    inorder(node->right);
}
void preorder(struct node* node)
{
    printf("%d ",node->data);
    if(node->left!=NULL)
    preorder(node->left);
    if(node->right!=NULL)
    preorder(node->right);

}
void postorder(struct node* node)
{

}
main()
{
    struct node* root;
    root=new(1);
    root->left=new(2);
    root->right=new(3);
    root->left->left=new(4);
    root->left->right=new(5);
    inorder(root);
    printf("\n");
    preorder(root);
    //printf("%d\n",height(root));
    return 0;

}

