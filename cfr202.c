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

long long int ch(int n)
{
    if(n==0 || n==1)
        return 1;
    long long int s=1,i;
    for(i=2;i<=n;i++)
        s=s*i;
    return s;
}
main()
{
    int t;
    t=fastio();
    while(t--)
    {
        int n,m,p;
        n=fastio();
        m=fastio();
        printf("%lld\n",ch(m+n)/(ch(n)*ch(m)));

    }
    return 0;
}
