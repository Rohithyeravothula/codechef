#include<stdio.h>
int bin(int *a,int b,int n)
{
    int l=0,r=n,m;
    while(l<r)
    {
        m=(l+r-1)/2;
        if(a[m]==b)
            return m;
        if(a[m]<b)
            l=m+1;
        else
            r=m-1;
    }
    if(a[l]==b)
        return l;
    return -1;
}
main()
{
int n,i;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
    a[i]=i;
while(1)
{
    int m;
    scanf("%d",&m);
    printf("%d\n",bin(a,m,n));
}
return 0;
}
