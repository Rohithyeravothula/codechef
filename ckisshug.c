#include<stdio.h>
#define M 1000000007
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n;
        scanf("%lld",&n);
        printf("%lld\n",(2*n)%M);
    }
    return 0;
}
