#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int a,b;
        scanf("%lld %lld",&a,&b);
        if(a>=0 && b>=0)
            printf("%lld\n",a+b);
        else if (a>=0 && b<0)
            printf("%lld\n",a-b);
        else if(a<0 && b>=0)
            printf("%lld\n",-a+b);
        else
            printf("%lld\n",-a-b);

    }
    return 0;
}
