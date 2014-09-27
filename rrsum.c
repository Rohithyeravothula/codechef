#include<stdio.h>
main()
{
    long long int n,m,p;
    scanf("%lld %lld",&n,&m);
    while(m)
    {
        scanf("%lld",&p);
        if(p<=(n+1))
            printf("0\n");
        else if (p>(n+1) && p<=2*n)
            printf("%lld\n",p-n-1);
        else
            printf("%lld\n",3*n-p+1);
        m--;
    }
    return 0;
}
