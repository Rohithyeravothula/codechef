#include<stdio.h>
#define M 1000000007
long long fast_pow(int a,int n)
{
    long long result = 1;
    long long power = n;
    long long value = a;
    while(power>0)
    {
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
        int n;
        scanf("%d",&n);
        printf("%lld\n",fast_pow(2,n-1));
    }
    return 0;
}
