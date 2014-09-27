#include<stdio.h>
#include<limits.h>
struct stack
{
    int num;
    struct stack *next;
};
struct stack *head;
int min=INT_MAX;
void push(struct stack **p,int n)
{
    struct stack *e,*f;
    f=(*p);
    e=(struct stack *)malloc(sizeof(struct stack));
    e->num=n;
    e->next=(*p);
    (*p)=e;
    if(min>n)
    min=n;
}
void pop(struct stack **p)
{
    (*p)=(*p)->next;
}
void print(struct stack *dummy)
{
    while(dummy!=NULL)
        {
            if(dummy->num!=INT_MAX)
            printf("%d\n",dummy->num);
            dummy=dummy->next;
        }
}
void findmin(struct stack *p)
{
    while(p!=NULL)
    {
        if(min>(p->num))
        min=p->num;
        p=p->next;
    }
}
main()
{
    int n,i,j,m;
    char s[20];
    struct stack *e,*head,*dummy;
    e=(struct stack *)malloc(sizeof(struct stack));
    e->num=INT_MAX;
    e->next=NULL;
    head=e;
    while(1)
    {
    scanf(" %s",s);
    if(strcmp(s,"push")==0)
    {
        scanf("%d",&n);
        push(&head,n);
        print(head);
    }
    else if(strcmp(s,"pop")==0)
    {
        printf("poped %d\n",head->num);
        pop(&head);
        print(head);
        findmin(head);
    }
    else if(strcmp(s,"min")==0)
    {
        printf("%d\n",min);

    }
    }
    return 0;

}
