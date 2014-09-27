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
long long int lcm(long long int a,long long int b)
{
    return a*b/gcd(a,b);
}
main()
{
    int t;
    t=fastio();
    while(t--)
    {
        long long int n,m,p,r,x,y;
        n=fastio();
        m=fastio();
        if(n==1 || m==1)
        {
            if(n==1)
                printf("%lld\n",m);
            else
                printf("%lld\n",n);
        }
        else
        {
        r=1;
        p=lcm(n-1,m-1);
        x=p/(n-1);
        y=p/(m-1);
        if(m*(n-1)<n*(m-1))
            r=r+(m*(n-1))/p;
        else
            r=r+(n*(m-1))/p;
        if(n==m)
            r--;
        printf("%lld\n",r);
        }
    }
    return 0;
}
