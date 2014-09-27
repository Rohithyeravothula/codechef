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
    int n,i;
    n=fastio();
    int a[n];
    for(i=0;i<n;i++)
        a[i]=fastio();
    int c=0,m=0;
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
            c++;
        else
        {
            if(m<c)
                m=c;
            c=0;
        }
    }
    if(m<c)
        m=c;
    printf("%d\n",m);
    return 0;
}
