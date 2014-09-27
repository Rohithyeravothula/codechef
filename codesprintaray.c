#include<stdio.h>
#define M 1000000007
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
long long int modBinomial(long long int n, long long int k, long long int p) {
    long long int numerator = 1;
    long long int i;
    for (i=0; i<k; i++) {
        numerator = (numerator * (n-i) ) % p;
    }

    long long int denominator = 1;
    for (i=1; i<=k; i++) {
        denominator = (denominator * i) % p;
    }
    return ( numerator* modInverse(denominator,p) ) % p;
}
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,i,s,d;
        scanf("%lld",&n);
        long long int a[n];
        for(i=0;i<n;i++)
            scanf("%lld",&a[i]);
        s=0;
        d=1;
        for(i=0;i<n;i++)
        {
            s=(s+d*modBinomial(n-1,i,M)*a[i])%M;
            d=d*(-1);
        }
        if(s<0)
        {
            while(s<0)
                s=s+M;
        }
        printf("%lld\n",s);
    }
    return 0;

}
