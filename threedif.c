#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    long long int n1,n2,n3,a1,a2,a3,s,s1,s2,s3;
    while(t--)
    {
        scanf("%lld %lld %lld",&a1,&a2,&a3);
        if((a1<=a2) && (a1<=a3))
            {n1=a1;
            if(a2<=a3)
            {
                n2=a2;
                n3=a3;
            }
            else
            {
                n2=a3;
                n3=a2;
            }
            }
        if((a2<=a3) && (a2<=a1))
        {
            n1=a2;
            if(a1<=a3)
            {
                n2=a1;
                n3=a3;
            }
            else
            {
                n2=a3;
                n3=a1;
            }

        }
        if((a3<=a1) && (a3<=a2))
        {
            n1=a3;
            if(a2<=a1)
            {
                n2=a2;
                n3=a1;
            }
            else
            {
                n2=a1;
                n3=a2;
            }
        }

        n2--;
        n3=n3-2;
        n1=n1%(1000000007);
        n2=n2%(1000000007);
        n3=n3%(1000000007);
        s=(((n1*n2)%1000000007)*n3)%1000000007;
        printf("%lld\n",s);
    }
    return 0;
}
