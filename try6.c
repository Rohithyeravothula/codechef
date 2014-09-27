#include<stdio.h>
main()
{
    long long int a=9849118568;
    long long int b=0;
    while(a!=0)
    {
        b=b*10;
        b=b+a%10;
        a=a/10;
        //printf("%ld %ld\n",b,a);
    }
    printf("%lld",b);
}
