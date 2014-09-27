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
        int m;
        long long int n,i,p,c;
        n=fastio();
        p=0;
        c=0;
        for(i=0;i<n;i++)
        {
            m=fastio();
            if(m==0 || m==1)
                c++;
            if(m==2)
                p++;
        }
        n=n-c;
        printf("%lld\n",((n*(n-1))/2)-(p*(p-1))/2);
    }
    return 0;
}
