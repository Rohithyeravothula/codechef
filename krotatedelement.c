#include<stdio.h>
int ch(int *a)
{
    int l=0,r=n-1,m;
    r=(l+r)/2;
    while(l<r)
    {
        if(l<a[r] && a[r]<r)

    }
}
main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int m,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&m);
        printf("%d %d\n",ch(a,n,m),bin(a,n,m,0,n-1));
    }
    return 0;
}
