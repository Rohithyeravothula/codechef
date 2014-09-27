#include<stdio.h>
main()
{
    int n,i,m;
    scanf("%d",&n);
    struct list{
    int num;
    struct list *p;
    }a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i].num);
    struct list* head,*tail;
    head=&a[0];
    for(i=0;i<n-1;i++)
    a[i].p=&a[i+1];
    a[n-1].p=NULL;
    tail=a[n-1].p;
    struct list *e,*f;
    e=head;
    printf("Done\n");
    while(1)
    {
        scanf("%d",&m);
        e=head;
        if(e->p==NULL)
        {
        printf("List empty\n");
        break;
        }
        if(e->num==m)
        {head=e->p;
        printf("Found in head,new head %d\n",head->num);}
        else
        {
            e=e->p;
            f=head;
            while(e!=NULL)
            {
                printf("%d\n",e->num);
                if(e->num==m)
                {
                    f->p=e->p;
                    break;
                }
                else
                {
                    e=e->p;
                    f=f->p;
                }
            }
        }
        e=head;
        printf("List Start\n");
        while(e!=NULL)
        {
            printf("%d\n",e->num);
            e=e->p;
        }
        e=head;
        printf("List End\n");

        printf("OList start\n");
        for(i=1;i<n;i++)
        printf("%d\n",a[i-1].p->num);
        printf("\n");
        printf("OList End\n");


    }
    return 0;

}
