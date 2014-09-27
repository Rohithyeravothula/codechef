#include<stdio.h>
main()
{
    int t,n,i,d;
    long long int m,h,m2,g;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        long long int a[n];
        m=10000000000;
        d=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&h);
            a[i]=h;
            if(m>h)
                m=h;
            if(h%2==1)
                d=1;
        }

        if(d==1)
            printf("1\n");
        else
        {
            m2=10000000000;
            for(i=0;i<n;i++)
            {
             g=a[i]%m;
             if((m2>g) && (g!=0))
                    m2=g;
            }
            printf("%lld\n",m2);
        }

    }
    return 0;
}
