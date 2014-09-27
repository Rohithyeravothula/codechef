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

int dig(int n)
{
    int m=n,p=0;
    while(m)
    {
        p=p+m%10;
        m=m/10;
    }
    return p;
}
main()
{
    int t;
    t=fastio();
    while(t--)
    {
        int n,i;
        n=fastio();
        for(i=1;i<=n;i++)
        {
            int g=i+dig(i);
            if(g==n)
                {printf("%d\n",i);
                break;}
        }
        if(i==n+1)
            printf("NONE\n");

    }
    return 0;
}
