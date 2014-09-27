#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n;
        scanf("%lld",&n);
        long long int a[n];
        long long int min;
        scanf("%lld",&min);
        a[0]=min;
        long long int i;
        for(i=1;i<n;i++)
        {
            scanf("%lld",&a[i]);
            if(min>a[i])
                min=a[i];
        }
        long long int s=0;
        for(i=0;i<n;i++)
            s=s+min*a[i];
        s=s-min*min;
        printf("%lld\n",s);
    }
    return 0;
}
