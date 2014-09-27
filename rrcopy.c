#include<stdio.h>
#define M 100006
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
        int n,i,c;
        int p[M]={0};
        n=fastio();
        int a[n];
        for(i=0;i<n;i++)
            {a[i]=fastio();
            p[a[i]]=1;}
        c=0;
        for(i=0;i<M;i++)
            if(p[i]!=0)
            c=c+1;
        printf("%d\n",c);
    }
    return 0;
}
