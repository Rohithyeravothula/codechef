#include<stdio.h>
#include<math.h>
long long int  BC(long long int n, long long int k)
{
    long long int* C = (long long int*)calloc(k+1, sizeof(long long  int));
    long long int i, j, res;

    C[0] = 1;

    for(i = 1; i <= n; i++)
    {
        for(j = min(i, k); j > 0; j--)
            C[j] = C[j] + C[j-1];
    }

    res = C[k];

    free(C);

    return res;
}
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,k;
        scanf("%lld %lld",&n,&k);
        printf("%lld\n",BC(n,k));
    }
    return 0;
}

