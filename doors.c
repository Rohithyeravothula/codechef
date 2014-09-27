#include<stdio.h>
#include<math.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n;
        int m;
        scanf("%lld",&n);
        m=sqrt(n);
        printf("%d\n",m);
    }
    return 0;
}
