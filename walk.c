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
        int m,y,i,n;
        n=fastio();
        m=0;
        for(i=0;i<n;i++)
        {
            y=fastio();
            if(y+i>m)
                m=y+i;
        }
        printf("%d\n",m);
    }
    return 0;
}
