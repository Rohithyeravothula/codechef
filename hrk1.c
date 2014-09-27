#include<stdio.h>
#include<math.h>
int ch(long long int n)
{
    int p=sqrt(n);
    if(p*p==n)
        return 1;
    else
        return 0;
}
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int a,b,v;
        scanf("%lld %lld",&a,&b);
        v=1+(int)sqrt(b)-(int)sqrt(a);
        if(ch(a)==0)
            v=v-1;
        printf("%lld\n",v);
    }
    return 0;
}
