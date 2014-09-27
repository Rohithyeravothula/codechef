#include<stdio.h>
#include<limits.h>
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
    int n,k,j,i,l,r,c;
    n=fastio();
    k=fastio();
    long long int a[n],d;
    for(i=0;i<n;i++)
    a[i]=fastio();
    int start=0;
    long long int max_d,min_a;
    max_d=LLONG_MIN;
    min_a=LLONG_MAX;
    r=0;
    while(r<=k)
    {
        for(j=1;j<=r+2;j++)
        {

            for(i=0;i<j;i++)
            {
                d=(a[j]-a[i])/(j-i);
                c=0;
                for(l=0;l<n;l++)
                {
                    if((a[i]+(l-i)*d)!=a[l])
                       c++;
                    if(c>r)
                        break;
                }
                if(c==r)
                {
                    if(min_a>(a[i]-i*d))
                    {
                        min_a=a[i]-i*d;
                        max_d=d;
                    }
                    else if(min_a==(a[i]-i*d) && max_d>d)
                    {
                        min_a=a[i]-i*d;
                        max_d=d;
                    }
                }
            }
        }
        r=r+1;
    }
    a[0]=min_a;
    for(i=0;i<n;i++)
        printf("%lld ",a[0]+i*max_d);
    printf("\n");
    return 0;
}
