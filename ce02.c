#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a[9]={0};
        int b[9]={0};
        long long int n,m,w;
        int p;
        scanf("%lld",&n);
        scanf("%lld",&w);
        m=n;
        while(m)
        {
            a[m%10]++;
            m=m/10;
        }
        m=w;
        while(m)
        {
            b[m%10]++;
            m=m/10;
        }
        int d=1;
        int i;
        for(i=0;i<10;i++)
            if(a[i]!=b[i])
        {
            d=0;
            break;
        }
        printf("%d\n",d);
    }
    return 0;
}
