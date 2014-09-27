#include<stdio.h>
int ch(int *a,int n,int m);
int bin(int *a,int n,int m,int l,int r);
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
int bin(int *a,int m,int l,int r)
{
    if(m<a[l] ||m>a[r])
    return -1;
    int c=(l+r)/2;
    if(a[c]==m)
    return c;
    else if(m<a[c])
    return bin(a,m,l,c-1);
    else if(m>a[r])
    return bin(a,m,c+1,r);
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
        printf("%d %d\n",ch(a,n,m),bin(a,n,m,0,n-1));
    }
    return 0;
}
