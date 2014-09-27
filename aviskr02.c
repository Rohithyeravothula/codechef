#include<stdio.h>
long long int fib(long long int);
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n;
        scanf("%lld",&n);
        printf("%lld\n",fib(n));
    }
    return 0;
}
long long int fib(long long int n)
{
    long long int a=0;
    long long int b=1;
    long long int c=1;
    while(n--)
    {
        c=(a%1000000007+b%1000000007)%1000000007;
        a=b;
        b=c;

    }
    return c;
}
