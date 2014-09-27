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
    printf("%d\n",(*e)->num);
    (*e)=(*e)->next;
    while(n)
    {
        (*e)->num=n%10;
        (*e)->next=(struct list*)malloc(sizeof(struct list));
        (*e)=(*e)->next;
        n=n/10;
        i++;
    }
    (*e)=NULL;
    *e=head;
}
main()
{
    int n,m,c1=0,c2=0,n1,m1,i,j;
    scanf("%d",&n);
    struct list *e,*f;
    ch(n,&e);
    ch(m,&f);
    printf("\n");
    return 0;
}
