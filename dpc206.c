#include<stdio.h>
int pal(long long int n);
long long int rev(long long int);
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n;
        int i;
        scanf("%lld",&n);
        i=0;
        while(1)
        {
            if(pal(n)==1)
                break;
            n=n+rev(n);
            i++;
        }
        printf("%d %lld\n",i,n);
    }
    return 0;
}
int pal(long long int n)
{
    int i,p;
    long long int m,r;
    m=0;
    r=n;
    while(r)
    {
        p=r%10;
        m=m*10+p;
        r=r/10;
    }

    if(m==n)
        return 1;
    else
        return 0;
}
long long int rev(long long int n)
{
    int i,p;
    long long int m,r;
    m=0;
    r=n;
    while(r)
    {
        p=r%10;
        m=m*10+p;
        r=r/10;
    }
    return m;

}
