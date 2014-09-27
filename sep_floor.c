#include<stdio.h>
long long ch(long long int a,long long int n,long long int M)
{
    long long result = 1;
    long long power = n;
    long long value = a;
    while(power>0)
    {
        //printf("%lld\n",value);
        if(power&1)
            {result = result*value;
            result = result%M;}
        value = value*value;
        value = value%M;
        power /= 2;
        //power >>= 1;
    }
    return result;
}
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,m,s,i;
        scanf("%lld %lld",&n,&m);
        s=0;
        for(i=1;i<=n;i++)
            s=(s+(ch(i,4,m)*(n/i))%m)%m;
        printf("%lld\n",s);
    }
    return 0;
}
