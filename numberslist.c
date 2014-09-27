#include<stdio.h>
struct list
{
    int num;
    struct list *next;
};
void ch(int n,struct list **e)
{
    int c=0,i,n1,j;
    n1=n;
    while(n1)
    {
        n1=n1/10;
        c++;
    }
    i=0;
    struct list *head;
    *e=(struct list*)malloc(sizeof(struct list));
    head=*e;
    if(n>0)
    {
        (*e)->num=n%10;
        (*e)->next=(struct list*)malloc(sizeof(struct list));
        n=n/10;
        i++;
    }
    (*e)=(*e)->next;
    while(n)
    {
        (*e)->num=n%10;
        n=n/10;
        if(n==0)
        {
            *e=NULL;
            break;
        }
        (*e)->next=(struct list*)malloc(sizeof(struct list));
        (*e)=(*e)->next;
        i++;
    }
    *e=head;
}
int num(struct list *e)
{
    int s=0,c=1;
    while(e!=NULL)
    {
        s=s+c*e->num;
        c=c*10;
        e=e->next;
    }
    return s;
}
main()
{
    int n,m,c1=0,c2=0,n1,m1,i,j;
    scanf("%d %d",&n,&m);
    struct list *e,*f,*head,*g;
    ch(n,&e);
    ch(m,&f);
    int p=num(e)+num(f);
    ch(p,&g);
    while(g!=NULL)
    {
        printf("%d",g->num);
        g=g->next;
    }
    return 0;
}
