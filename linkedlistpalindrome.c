#include<stdio.h>
#include<string.h>
struct list
    {
        char c;
        struct list *next;
    };
void ch(char *a,int l,struct list **e)
{
    struct list *head;
    *e=(struct list*)malloc(sizeof(struct list ));
    head=*e;
    int i;
    for(i=0;i<l;i++)
    {
        (*e)->c=a[i];
        (*e)->next=(struct list *)malloc(sizeof(struct list));
        (*e)=(*e)->next;
    }
    *e=head;
    int c=0;
    while((*e)!=NULL)
    {
        c++;
        (*e)=(*e)->next;
    }
    printf("%d\n",c);
}
int chp(struct list *e)
{
    struct list *head,*mid;
    head=e;
    mid=e;
    int m,l=0;
    while(e!=NULL)
    {
        l++;
        e=e->next;
    }
    printf("%d\n",l);
    l--;
    m=l/2;
    l=l-(l/2);
    while(l)
    {
        l--;
        //printf("C--%c\n",mid->c);
        mid=mid->next;
    }
    e=head;
    while(m)
    {
        m--;
        printf("%c %c\n",e->c,mid->c);
        if(mid->c != e->c)
            return 0;
        mid=mid->next;
        e=e->next;
    }
    return 1;
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
    return 0;

}
