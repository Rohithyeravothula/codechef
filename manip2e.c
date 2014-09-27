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

main()
{
    int t;
    t=fastio();
    while(t--)
    {
        int n,s,p;
        n=fastio();
        p=5;
        s=0;
        while(n)
        {
            if(n&1)
                s+=p;
            p=p*5;
            n/=2;
        }
        printf("%d\n",s);
    }
    return 0;
}
