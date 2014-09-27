#include<stdio.h>
#include<math.h>
main()
{
    int t;
    scanf("%d",&t);
    long long int n,q,r;
    double p;
    while(t--)
    {
        scanf("%lld",&n);
        p=sqrt(n);
        if((float)(int)p==p)
            printf("0\n");
        else
        {
            q=(int)p;

            while(q>=1)
            {
                r=n/q;
                if(r*q==n)
                    {printf("%d\n",abs(r-q));
                     break;
                    }
                    q=q-1;

            }
        }
    }
    return 0;
}
