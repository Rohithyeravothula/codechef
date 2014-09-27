#include<stdio.h>
long long int gcd(long long int,long long int);
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int i;
        long long int num[n];
        for(i=0;i<n;i++)
            scanf("%d",&num[i]);
        long long int r=num[0];
        for(i=0;i<n;i++)
            r=gcd(r,num[i]);
        printf("%lld\n",r);
    }
    return 0;
}
long long int gcd(long long int a,long long int b)
{
    long long int c;
while(a!=0)
{
    c=a;
    a=b%a;
    b=c;
}
return b;
}
