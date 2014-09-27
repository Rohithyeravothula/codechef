#include<stdio.h>
#include<math.h>
#define M 1000000007
long long fast_pow(long long int a,long long int n)
{
    long long result = 1;
    long long power = n;
    long long value = a;
    while(power>0)
    {
        if(power&1)
            {result = result*value;
            result = result%M;}
        value = value*value;
        value = value%M;
        power /= 2;
        //power >>= 1;
    }
    return result;
}
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
    long long int n,m,t,r,d,s,p,count;
    scanf("%lld",&t);
    count=1;
    while(t--)
    {
        scanf("%lld %lld",&m,&n);
        {s=fast_pow(m,n);
        r=1;
        p=0;
        d=1;
        while(r<m)
        {
            p=p+d*modBinomial(m,r,M)*fast_pow(m-r,n);
            d=d*(-1);
            r++;
        }
        s=s-p;
        if(s<0)
        {
            while(s<0)
            s=s+M;
        }
        printf("Case #%lld %lld\n",count,s);
        count++;
        }
    }
    return 0;
}
