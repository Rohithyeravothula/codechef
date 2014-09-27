#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    long long int n,k;
    while(t--)
    {
        scanf("%lld %lld",&n,&k);
        if(k==0)
        printf("0 %lld\n",n);
        else
        printf("%lld %lld\n",(n/k),(n%k));
    }
    return 0;
}
