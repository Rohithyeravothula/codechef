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
long long int modBinomial(long long int n, long long int k, long long int p) {
    long long int numerator = 1;
    int i;
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
        long long  int n;
        scanf("%lld",&n);
        if(n<13)
        printf("0\n");
        else if (n==13 || n==14)
        printf("1\n");
        else
        {
            n=n-13;
            n=n/2;
            printf("%lld\n",modBinomial(n+6,6,1000000007));
        }
    return 0;
}
