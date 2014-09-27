#include<stdio.h>
long long int po(long long int);
main()
{

    int t,i;
    long long int z,n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        n=n%1000000007;
        z=po(n);
        z=(z-((3*(n%1000000007)%1000000007))%1000000007);
        z=(z+2)%1000000007;
        z=z/2;
        printf("%lld\n",z);

    }
    return 0;
}
long long int po(long long int n)
{

    long long int x;
    x=((n%1000000007)*(n%1000000007))%1000000007;
    return x;
}
