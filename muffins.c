#include<stdio.h>
main()
{

    int t,i;
    long long int n;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        printf("%lld\n",(n/2)+1);

    }
    return 0;
}
