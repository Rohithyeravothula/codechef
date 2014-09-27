#include<stdio.h>
#define M 1000000007
long long int A[1000000]={0};
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
    long long int a=0,b=1,c=1,i;
    for(i=0;i<1000000;i++)
    {
        c=(a%M+b%M)%M;
        a=b;
        b=c;
        A[i]=c;
    }
    int t;
    t=fastio();
    while(t--)
    {
        int n;
        n=fastio();
        printf("%lld\n",A[n-1]);
    }
    return 0;

}

