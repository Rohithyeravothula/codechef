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
    long long int n,s,m,i;
    n=fastio();
    s=0;
    for(i=0;i<n;i++)
    {
        m=fastio();
        s=s+m;
    }
    n=(n*(n+1))/2;
    if(n==s)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;

}
