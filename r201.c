#include<stdio.h>
long long int a[13]={1,1,2,6,24,120,720,5040,40320,362880,3628800,39916800,479001600};
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int m,n;
        scanf("%d %d",&m,&n);
        printf("%lld\n",(a[m+n]/a[m])/a[n]);
    }
    return 0;
}
