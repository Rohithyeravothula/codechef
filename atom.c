#include<stdio.h>
#import<math.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,k,m,p;
        scanf("%lld %lld %lld",&n,&k,&m);
        if(m<=n)
            printf("0\n");
        else
        {
            float a1,a2,a3;
            a1=log(m/n);
            a2=log(k);
            a3=a1/a2;
        printf("%d\n",(int)a3);}

    }
    return 0;
}
