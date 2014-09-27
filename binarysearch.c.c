#include<stdio.h>
int ch(int *a,int n,int m);
int ch(int *a,int n,int m)
{
    int i,j,r;
    if(m<a[0] || m>a[n-1])
    return -1;
    i=0;
    j=n-1;
    r=((i+j)/2);
    while(i<j)
    {
        if(m==a[r])
        return r;
        else if(m<a[r])
        j=r-1;
        else if(m>a[r])
        i=r+1;
        r=((i+j)/2);
    }
    if(i==j && a[i]!=m)
    return -1;
    else
    return i;

}
main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    a[i]=i+1;
    int m,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&m);
        printf("%d\n",ch(a,n,m));
    }
    return 0;
}
