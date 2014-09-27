#include<stdio.h>
int bin(int *a,int n,int p)
{
    int l,r,m;
    l=0;
    r=n;
    m=(l+r-1)/2;
    while(l!=r)
    {
        //printf("%d\n",m);
        if(a[m]==p)
        return m;
        if(a[m]>p)
        r=m-1;
        else if (a[m]<p)
        l=m+1;
        m=(l+r-1)/2;
    }
    if(a[l]==p)
    return l;
    return -1;
}
main()
{
    int n,i,j,k,l,m;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    a[i]=i;
    while(1)
    {
        scanf("%d",&m);
        printf("%d\n",bin(a,n,m));
    }
    return 0;

}
