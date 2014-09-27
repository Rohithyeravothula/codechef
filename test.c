#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int l,b,k;
        scanf("%lld %lld %lld",&l,&b,&k);
        printf("%lld\n",(l/k)*(b/k));
    }
    return 0;
}
