#include<stdio.h>
main()
{
    int n,i,j;
    scanf("%d",&n);
    struct list
    {
        int num;
        struct list *next;
    }a[n];
    for(i=0;i<n;i++)
    a[i].num=i;
    for(i=0;i<n-1;i++)
    a[i].next=&a[i+1];
    //a[i/2].next=&a[1];
    a[n-1].next=&a[0];
    struct list *head,*e,*f;
    head=&a[0];
    e=head;
    f=head;
    int d=0;
    while(e!=NULL && f!=NULL)
    {
        e=e->next;
        f=f->next;
        if(f!=NULL)
        {f=f->next;
        if(e==f)
        {
            printf("Loop found\n");
            d=1;
            break;
        }
        }
        else
        break;
    }
    e=head;
    if(d==1)
    {
        while(e!=f)
        {
            e=e->next;
            f=f->next;
        }
        printf("%d\n",e->num);
    }
    if(d==0)
    printf("Not found\n");
    return 0;
}
