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
    long long int k,n,i,x,y;
    n=fastio();
    k=fastio();
    long long int a[n];
    for(i=0;i<n;i++)
        a[i]=fastio();
    x=a[0];
    for(i=0;i<n;i++)
        if(x<a[i])
        x=a[i];

    int d=0;
    if(k==0)
    {
        for(i=0;i<n;i++)
            printf("%lld ",a[i]);
        printf("\n");
    }
    else
    {
        if(k%2==0)
        {
            for(i=0;i<n;i++)
                a[i]=x-a[i];
            y=a[0];
            for(i=0;i<n;i++)
                if(y<a[i])
                    y=a[i];
            for(i=0;i<n;i++)
                printf("%lld ",y-a[i]);
            printf("\n");
        }
        else
        {
            for(i=0;i<n;i++)
                printf("%lld ",x-a[i]);
            printf("\n");
        }
    }
    return 0;
}
