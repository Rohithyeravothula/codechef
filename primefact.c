#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int a,b,c,d;
        scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
        int p1[100]={0},p2[100]={0};
        int u=0,v=0;
    }
}


void primeFactors(long long int n)
{
    while (n%2 == 0)
    {
        printf("%d ", 2);
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            printf("%d ", i);
            n = n/i;
        }
    }
    if (n > 2)
        printf ("%d ", n);
}
