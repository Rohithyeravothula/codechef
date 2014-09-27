#include<stdio.h>
main()
{
    int n,i;
    scanf("%d",&n);
    struct list
    {
        int m;
        struct list *p;
    }a[n];
    for(i=0;i<n;i++)
    {
        a[i].m=i;
        if(i!=n-1)
        a[i].p=&a[i+1];
    }
    a[n-1].p=NULL;
    struct list *head;
    head=&a[0];
    struct list *tail;
    tail=head->p;
    printf("midway\n");
    struct list *l,*r;
    l=head;
    r=tail->p;
    while(r!=NULL)
    {
        tail->p=l;
        l=tail;
        tail=r;
        r=r->p;
    }
    return 0;
}

