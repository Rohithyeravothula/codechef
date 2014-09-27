#include<stdio.h>
#include<math.h>
#define M 1000000
long long int ch(long long int n)
{
    if(n<0)
        return -n;
    else
        return n;
}
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

int p[1000000]={0};
main()
{
    int t;
    t=fastio();
    while(t--)
    {
        int a,b,c,d;
        long long int n,i,x,y,s;
        for(i=0;i<M;i++)
            p[i]=0;

        n=fastio();
        a=fastio();
        b=fastio();
        c=fastio();
        d=fastio();
        y=d;
        p[d]=1;
        for(i=0;i<n-1;i++)
        {
        x=(a*y*y+b*y+c)%M;
        p[x]++;
        y=x;
        }
        s=0;
        for(i=0;i<M;i++)
            p[i]=p[i]%2;
        int z=0;
        for(i=0;i<M;i++)
        {
            if((p[i]==1) && (z==0))
                {s=s+i;
                z=1;}
            else if((p[i]==1) && (z==1))
            {
                s=s-i;
                z=0;
            }

        }
        printf("%lld\n",ch(s));
    }
    return 0;
}
