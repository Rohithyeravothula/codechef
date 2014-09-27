#include<stdio.h>
long long int ch(long long int,long long int);
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        long long int a[n];
        int i;
        for(i=0;i<n;i++)
            scanf("%lld",&a[i]);
        long long int r;
        r=a[0];
        for(i=0;i<n;i++)
            r=ch(r,a[i]);
        printf("%lld\n",r);
    }
    return 0;
}
long long int ch(long long int a,long long int b)
{
    long long int c,d;
    c=a;
    d=b;
    if(c==1)
        return c;
    else if(d==1)
        return d;
    else
    {
        while(c!=d)
        {
            if(d!=0)
            c=c%d;
            if(c==0)
                return d;
            if(c!=0)
                d=d%c;
            if(d==0)
                return c;
        }
        return c;
    }
}
