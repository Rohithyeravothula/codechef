#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int s;
        int n,p;
        scanf("%d",&n);
        p=n;
        n=n/2;
        s=(n*(n+1));
        if(p%2==0)
            s=s-(p/2);
        printf("%lld\n",s);
    }
    return 0;
}
