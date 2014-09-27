#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int x,y,s;
        scanf("%lld %lld",&x,&y);
        s=(y-x+1)*(y-x)/2;
        printf("%lld\n",s);
    }
    return 0;
}
