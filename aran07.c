#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        long long int a;
        scanf("%d",&n);
        int m=0;
        int z;
        z=n;
        while(z)
        {
            m=m+(z%10);
            z=z/10;
        }
        a=pow(2,m);
        a=a*n;
        printf("%lld\n",a);
    }
    return 0;
}
