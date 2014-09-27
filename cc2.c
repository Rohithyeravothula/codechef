#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int a,b,c,r,i;
        scanf("%lld %lld %lld",&a,&b,&r);
        if(r==1)
            printf("%lld\n",a);
        else if(r==2)
            printf("%lld\n",r);
        else
        {
        i=2;
        while(i<r)
        {
            c=a+b;
            c=c%(10000000007);
            a=b;
            b=c;
            i=i+1;
        }
        printf("%lld\n",c);}
    }
    return 0;
}
