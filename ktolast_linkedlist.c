#include<stdio.h>
#include<string.h>
struct list
{
    char c;
    struct list *next;
};
void ch(char *s,int l,struct list **e)
{
    struct list *head;
    *e=(struct list*)malloc(sizeof(struct list));
    head=*e;
    int i;
    for(i=0;i<l;i++)
    {
        (*e)->c=s[i];
        (*e)->next=(struct list*)malloc(sizeof(struct list));
        (*e)=(*e)->next;
    }
    *e=head;
}
void chk(struct list *e,int k)
{
    int l=0;
    struct list *head;
    head=e;
    while(e!=NULL)
    {
        e=e->next;
        l++;
    }
    if(k<l)
    {
        e=head;
        while(k--)
            e=e->next;
        while(e!=NULL)
        {
            printf("%c",e->c);
            e=e->next;
        }

    }
    else
    {
        printf("out of bound\n");
    }

}
main()
{
    int n;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
    int l=strlen(s);
    struct list *e;
    ch(s,l,&e);
    int k;
    scanf("%d",&k);
    chk(e,k);
    return 0;

}
