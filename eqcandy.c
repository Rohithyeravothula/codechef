#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,i;
        scanf("%lld",&n);
        long long int a[n];
        for(i=0;i<n;i++)
            scanf("%lld",&a[i]);
        long long int b=0,s=0;
        for(i=0;i<n;i++)
            s=s+a[i];
        s=s/n;
        for(i=0;i<n;i++)
        {
            if(s>(a[i]+b))
            {
                long long int x,y=a[i]+b,p;
                b=0;
                x=s*i;
                p=x/y;
                b=x-p*i+x%y;
                s=y;
            }
            else
                b=b+a[i]-s;
        }
        printf("%lld\n",s);
    }
    return 0;
}
