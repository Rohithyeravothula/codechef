#include<stdio.h>
#define M 1000000007
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

long long int ch(int n)
{
    long long int s=1;
    if(n==0)
        return 1;
    else if(n==1)
        return 2;
    else
    {
        s=ch(n/2);
        s=s*s%M;
        if(n%2)
            s=s*2%M;
    }
    return s;
}
main()
{
    int t;
t=fastio();
    while(t--)
    {
        int n;
        n=fastio();
        printf("%lld\n",ch(n));
    }
    return 0;
}

