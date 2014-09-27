#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i;
        long long int d,s=0;
        scanf("%d",&n);
        long long int a[n];
        for(i=0;i<n;i++)
        {scanf("%lld",&a[i]);
        s=s+a[i];}
        scanf("%lld",&d);
        d=d%s;
        if(d==0)
        printf("%d\n",n);
        else
        {
        for(i=0;i<n;i++)
        {
            d=d-a[i];
            if(d<=0)
            {
                printf("%d\n",i+1);
                break;
            }
        }
        }
    }
    return 0;
}
