#include<stdio.h>
#include<math.h>
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
    int p=sqrt(n);
    if (p*p==n)
        return 1;
    else
        return 0;
}
int sum(int n)
{
    int i,s=0,m=sqrt(n)+1;
    for(i=2;i<m;i++)
    if(n%i==0)
    s=s+i+n/i;
    if(ch(n)==1)
        s=s-m-1;
    return s+1;
}
main()
{
    int t;
    t=fastio();
    while(t--)
    {
        int n,k;
        n=fastio();
        k=sum(n);
        if(n==sum(k))
            printf("Yes, amicable with %d\n",k);
        else
            printf("No\n");
    }
    return 0;
}

