#include<stdio.h>
int fast_pow(long long int a,long long int n)
{
    int result = 1;
    long long int power = n;
    long long int value = a;
    while(power>0)
    {
        if(power&1)
            {result = result*value;
            result = result%10;}
        value = value*value;
        value = value%10;
        power /= 2;
    }
    return result;
}
main()
{
    long long int t;
    scanf("%lld",&t);
    while(t--)
    {
        long long int b,e;
        scanf("%lld %lld",&b,&e);
        printf("%d\n",fast_pow(b,e));
    }
    return 0;
}
