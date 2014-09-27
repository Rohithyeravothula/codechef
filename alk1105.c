#include<stdio.h>
main()
{
    long long int n,i;
    scanf("%lld",&n);
    long long int s=0;
    for(i=1;i<=n;i++)
        s=s+((n/i)*i);
    printf("%lld\n",s);
    return 0;
}
