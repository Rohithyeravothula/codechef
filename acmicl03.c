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

long long ch(int a,int n)
{
    long long result = 1;
    long long power = n;
    long long value = a;
    while(power>0)
    {
        if(power&1)
            {result = result*value;
            result = result%10000007;}
        value = value*value;
        value = value%10000007;
        power /= 2;
        //power >>= 1;
    }
    return result;
}

main()
{
    int t;
    t=fastio();
    while(t--)
    {
        long long int n;
        n=fastio();
        if(n%2==0)
            printf("%lld\n",ch(2,n)+1);
        else
            printf("%lld\n",ch(2,n)-1);
    }
    return 0;
}
