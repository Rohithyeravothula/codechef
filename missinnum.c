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
    scanf("%d",&t);
    while(t--)
    {
        int n;
        n=fastio();
        int i,m,s=(n*(n+1))/2;
        for(i=0;i<n-1;i++)
        {
            m=fastio();
            s=s-m;
        }
        printf("%d\n",s);
    }
    return 0;
}
