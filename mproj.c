#include<stdio.h>
int gcd(int a,int b)
{
    if(a==0)
        return b;
    else
        return gcd(b%a,a);
}
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,s,r,f,i;
        scanf("%lld %lld %lld",&n,&s,&r);
        long long int c=0;
        for(i=0;i<n;i++)
        {
            long long int u,v;
            scanf("%lld %lld",&u,&v);
            if((u>s) || (v>r))
                c=c+1;
        }
        scanf("%lld",&f);
        long long int p=gcd(c,f);
        c=c/p;
        f=f/p;
        printf("%lld/%lld\n",c,f);
    }
    return 0;
}
