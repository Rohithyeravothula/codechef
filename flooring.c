#include<stdio.h>
long long int  modPow(long long int a, long long int x,  long long int p) {
    long long int res = 1;
    while(x > 0) {
        if( x % 2 != 0) {
            res = (res * a) % p;
        }
        a = (a * a) % p;
        x /= 2;
    }
    return res;
}

long long int modInverse(long long int a, long long int p) {
    return modPow(a, p-2, p);
}
long long int sum4(long long int n,long long int m)
{
    long long int s;
    s=(n)*(n+1)%m;
    s=(s*((2*n)+1))%m;
    s=(s*(((3*n*n)%m)+(3*n)-1))%m;
    s=(s*modInverse(30,m))%m;
    return s;
}
main()
{
    int t;
    long long int n,m;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld %lld",&n,&m);
        printf("%lld\n",sum4(n,m));
    }
    return 0;
}
