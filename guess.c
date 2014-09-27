#include<stdio.h>
inline int fastio()
{
     int t=0;
     char ch;
     ch=getchar_unlocked();
     while(ch<'0'||ch>'9')
     ch=getchar_unlocked();
     while(ch<='9'&& ch>='0')
     {
                     t=(t<<3)+(t<<1)+ch-'0';
                     ch=getchar_unlocked();
     }
     return t;
}

long long int gcd(long long int a,long long int b)
{
    if(a==0)
        return b;
    else
        return gcd(b%a,a);
}

main()
{
    int t;
    t=fastio();
    while(t--)
    {
        long long int m,n;
        n=fastio();
        m=fastio();
        long long int r,q,p;
        p=(n-(n/2))*(m/2)+(m-(m/2))*(n/2);
        q=n*m;
        r=gcd(p,q);
        //printf("%lld\n",r);
        p=p/r;
        q=q/r;
        printf("%lld/%lld\n",p,q);
    }
    return 0;
}

