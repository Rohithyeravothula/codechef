#include<stdio.h>
struct list
{
    int num;
    struct list *next;
};
struct list* ch(int n)
{
    int c=0,i,n1,j;
    n1=n;
    while(n1)
    {
        n1=n1/10;
        c++;
    }
    struct list a[c];
    i=0;
    while(n)
    {
        a[i].num=n%10;
        n=n/10;
        i++;
    }
    for(j=0;j<i-1;j++)
    a[j].next=&a[j+1];
    a[i-1].next=NULL;
    return &a[0];

}
main()
{
    int n,m,c1=0,c2=0,n1,m1,i,j;
    scanf("%d %d",&n,&m);
    n1=n;
    m1=m;
    while(n1)
    {

        n1=n1/10;
        c1++;
    }
    while(m1)
    {
        m1=m1/10;
        c2++;
    }
    struct list a[c1],b[c2];
    i=0;
    while(n)
    {
        a[i].num=n%10;
        n=n/10;
        i++;
    }
    for(j=0;j<i;j++)
    a[j].next=&a[j+1];
    a[i-1].next=NULL;
    i=0;
    while(m)
    {
        b[i].num=m%10;
        m=m/10;
        i++;
    }
    for(j=0;j<i;j++)
    b[j].next=&b[j+1];
    b[i-1].next=NULL;
    struct list *e,*f;
    e=&a[0];
    f=&b[0];
    while(e!=NULL)
    {
        printf("%d",e->num);
        e=e->next;
    }
    printf("\n");
    while(f!=NULL)
    {
        printf("%d",f->num);
        f=f->next;
    }
    printf("\n");
    return 0;
}
