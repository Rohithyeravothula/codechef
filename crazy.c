#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int a,b,c,n,m;
        scanf("%lld %lld %lld",&a,&b,&c);
        m=b-a;
        n=m/c;
//        printf("%lld %lld\n",c,m);
        if(m>c)
        n++;
        printf("%lld\n",n);
    }
    return 0;
}

