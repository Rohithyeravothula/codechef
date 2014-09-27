#include<stdio.h>
#include<math.h>
long long int fac(long long int n,long long int r)
{
    if(n==r)
        return 1;
    if(r==1)
        return n;
    return fac(n-1,r)+fac(n-1,r-1);
}
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,m,k,i;
        long long int a[11]=0;
        for(i=0;i<11;i++)
            scanf("%lld",&a[i]);
        scanf("%lld",&k);

    }
    return 0;
}
