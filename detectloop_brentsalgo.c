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
    //a[n-1].next=NULL;
    a[n-1].next=&a[n-2];
    struct list *head,*e,*f;
    head=&a[0];
    e=head;
    f=head;
    int d=0;
    int limit=2;
    int taken=0;
    while(1)
    {
        if(f==NULL)
        break;
        f=f->next;
        taken++;
        if(e==f)
        {printf("Found\n");
        break;
        }
        if(taken==limit)
        {
            taken=0;
            limit*=2;
            e=f;
        }
    }
    printf("%d\n",taken);
    return 0;
}
