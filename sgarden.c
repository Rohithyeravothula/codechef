#include<stdio.h>
#define M 1000000007
long long int gcd(long long int a,long long int b)
{
    if(a==0)
        return b;
    else
        return gcd(b%a,a);
}
long long int lcm(long long int a,long long int b)
{
    return a*b/gcd(a,b);
}

main()
{
    long long int n,i,j,s,t;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        long long int a[n],c[n];
        for(i=0;i<n;i++)
            {scanf("%lld",&a[i]);
            c[n]=0;}
        for(i=0;i<n;i++)
        {
            j=a[i];
            s=0;
            while((j-1)<n)
            {
                s++;
                if(a[j-1]!=a[i])
                    j=a[j];
                else
                    break;
            }
            c[i]=s;
        }
        for(i=0;i<n;i++)
            printf("%lld ",c[i]);
        printf("\n");
    /*long long int l=c[0];
    for(i=0;i<n;i++)
        l=lcm(l,c[i])%M;
    printf("%lld\n",l);*/
    }
    return 0;

}
