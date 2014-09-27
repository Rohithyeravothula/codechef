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

int ch(int n)
{
    int m,p,a;
    m=0;
    p=n;
    while(p)
    {
        a=p%10;
        m=m*10+a;
        p=p/10;
    }
    return m;
}
main()
{
    int t;
    t=fastio();
    while(t--)
    {
        int u,v;
        scanf("%d %d",&u,&v);
        printf("%d\n",ch(ch(u)+ch(v)));
    }
    return 0;
}
