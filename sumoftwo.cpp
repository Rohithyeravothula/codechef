#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int bin(int *a,int n,int m)
{
    if(m<a[0] || m>a[n-1])
    return -1;
    int l,r,c;
    l=0;
    r=n-1;
    c=(l+r)/2;
    while(l<r)
    {
        if(m==a[c])
        return 1;
        else if(m>a[c])
        l=c+1;
        else if(m<a[c])
        r=c-1;
        c=(l+r)/2;
    }
    if(l==r && a[l]==m)
    return 1;
    return 0;

}
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,j,q;
        scanf("%d %d",&n,&q);
        int a[n],i;
        for(i=0;i<n;i++)
        a[i]=i+1;
        sort(a,a+n);
        for(j=0;j<q;j++)
        {
        scanf("%d",&m);
        int r,c=0;
        for(i=0;i<(n/2);i++)
        {
            r=m-a[i];
            if(bin(a,n,r)==1)
            {
                printf("%d %d\n",a[i],r);
                c++;
            }
        }
        printf("%d\n",c);}
    }
    return 0;
}
