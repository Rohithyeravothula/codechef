#include<stdio.h>
#include<math.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,m,s;
        float f;
        scanf("%lld",&n);
        f=log(n)/(0.7);
        m=(int)f;
        s=pow(2,m);
        while(1)
        {
            if(s*2>n)
                break;
            s=s*2;
        }
        printf("%lld\n",s);
    }
    return 0;
}
