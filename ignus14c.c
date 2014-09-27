#include<stdio.h>
long long int ch(long long int n)
{
    long long int i,s=1;
    for(i=0;i<n;i++)
    s=((s*2)%1000000007);
    return s;
}
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n;
        scanf("lld",&n);
        printf("%lld\n",ch(n));
    }
    return 0;
}
