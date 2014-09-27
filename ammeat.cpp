#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
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

int main()
{
    int t;
    t=fastio();
    while(t--)
    {
        long long int n,i;
        long long int m;
        n=fastio();
        m=fastio();
        long long int a[n];
        for(i=0;i<n;i++)
            a[i]=fastio();
        long long int s=0;
        sort(a,a+n);
        for(i=0;i<n;i++)
            s=s+a[i];
        if(m>s)
            printf("-1\n");
        else
        {
            long long int c=1;
            s=0;
            for(i=n-1;i>=0;i--)
            {s=s+a[i];
            if(s>=m)
            {
                printf("%lld\n",c);
                break;
            }
            c++;
            }
        }
    }
    return 0;
}
