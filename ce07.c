#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,s,m,p,i;
        scanf("%lld",&n);
        m=n;
        s=0;
        while(n)
        {
            p=n%10;
            s=s+p;
            n=n/10;
        }
        s=s<<m;
        printf("%lld\n",s);
    }
    return 0;
}
