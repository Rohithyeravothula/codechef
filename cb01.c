#include<stdio.h>
unsigned long long int gcd(unsigned long long int a,unsigned long long int b)
{
    unsigned long long s;
   while(b>0)s=a%b,a=b,b=s;
   return a;
}
main()
{
    int t;
    unsigned long long int n,r,s,i,d;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%llu %llu",&n,&r);
        if(n<r)
            printf("0\n");
        else
        {
            s=1;
            if(r>n-r)r=n-r;
            for(i=1;i<=r;i++)
            {
                d=gcd(s,i);
                s/=d;
                s*=(n-i+1)/(i/d);
            }
        printf("%llu\n",s);
        }
    }
    return 0;
}
