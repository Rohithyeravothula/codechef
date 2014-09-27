#include<stdio.h>
long long int ch(long long int i,long long int m)
{
    long long int k;
    k=(i*i)%m;
    k=(k*k)%m;
    return k;
}
main()
{
    int t;
    scanf("%d",&t);
    long long int n,m,k,i;
    while(t--)
    {
        scanf("%lld %lld",&n,&m);
        k=0;
        for(i=1;i<=n;i++)
        k=(k+ch(i,m)*(n/i));
        printf("%lld\n",k);
    }
    return 0;
}
