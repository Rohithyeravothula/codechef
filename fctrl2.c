#include<stdio.h>
long long unsigned int fac(int);
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        printf("%llu\n",fac(n));
    }
    return 0;
}
long long unsigned int fac(int n)
{
    if((n==1) || (n==0))
        return 1;
    else
        return n*fac(n-1);
}
