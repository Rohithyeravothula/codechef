#include<stdio.h>
#include<math.h>
main()
{
    int t;
    scanf("%d",&t);
    long long int n,a,b;
    while(t)
    {
        t=t-1;
        scanf("%lld %lld %lld",&n,&a,&b);
        int i,j;
        int r=0;
        for(i=0;i<n;i++)
            {if(a%2!=0)
                r=r+1;
            a=a/2;
            }
        int e=0;
        for(i=0;i<n;i++)
            {if(b%2!=0)
                e=e+1;
            b=b/2;
            }

        long long int p,s;
        if(r+e==n)
        {
            s=pow(2,n)-1;
            printf("%lld\n",s);
        }
        int q;
        s=0;
        if(r+e<n)
        {
            q=r+e;
            p=pow(2,(n-1));

            for(i=0;i<q;i++)
            {
                s=s+p;
                p=p/2;
            }
            printf("%lld\n",s);
        }
        if(r+e>n)
        {
            q=2*n-r-e;
            p=pow(2,(n-1));

            for(i=0;i<q;i++)
            {
                s=s+p;
                p=p/2;
            }
            printf("%lld\n",s);
        }
    }
    return 0;
}

