#include<stdio.h>
#include<math.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int p,y;
        scanf("%lld %lld",&p,&y);
        int i;
        y=y-2000;
        for(i=0;i<y;i++)
            p=(p*p)%1000000007;
        printf("%lld\n",p);
    }
    return 0;
}
