#include<stdio.h>
#include<math.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,k,i,s;
        scanf("%lld %lld",&n,&k);
        s=1;
        if(k<n/2)
            k=n-k;
        for(i=k+1;i<=n;i++)
            s=s*i;
        for(i=2;i<=n-k;i++)
            s=s/i;
        printf("%lld\n",s);
    }
    return 0;
}

