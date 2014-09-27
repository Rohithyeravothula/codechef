#include<stdio.h>
#include<math.h>
int ch(long long int n)
{
    long long int m,s=0;
    m=n;
    while(m)
    {
        s=s+(m%10);
        m=m/10;
    }
    return s;
}
int pr(long long int n)
{
    int i;
    if((n==2) || (n==3))
        return 1;
    long long int m=(int)sqrt(n)+1;
    for(i=0;i<m;i++)
        if(n%i==0)
    {return 0;
    break;}
    if(i==m)
        return 1;
}
int pal(long long int n)
{
    long long int m,r;
    m=n;
    r=0;
    int p;
    while(m)
    {
        p=m%10;
        r=r*10+p;
        m=m/10;
    }
    printf("%lld %lld\n",n,r);
    if(n==r)
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
        long long int n;
        scanf("%lld",&n);
        n++;
        while((pal(n)!=1)&&(pr(ch(n))!=1))
            n++;
        printf("%lld\n",n);
    }
    return 0;
}
