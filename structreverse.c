#include<stdio.h>
main()
{
    int n;
    scanf("%d",&n);
    struct list{
    int m;
    struct list *p;
    }a[n];
    for(i=0;i<n-1;i++)
        a[i].p=&a[i+1];
    for(i=0;i<n;i++)
        scaf("%d",&a[i].m);

}
