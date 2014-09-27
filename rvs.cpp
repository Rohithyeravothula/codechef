#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int s,ma,mb,i,n,a,b;
        scanf("%lld %lld %lld",&a,&b,&n);
        long long int p[n];
        for(i=0;i<n;i++)
            scanf("%lld",&p[i]);
        sort(p,p+n);
        s=0;
        for(i=0;i<n;i++)
        {
            s=s+p[i];
            if(s>a)
                {
                    ma=i;
                    break;
                }
        }
        if(i==n)
            ma=n;
        s=0;
        for(i=0;i<n;i++)
        {
            s=s+p[i];
            if(s>b)
                {
                    mb=i;
                    break;
                }
        }
        if(i==n)
            mb=n;

        if(ma>mb)
            printf("Raghu Won\n");
        else if(mb>ma)
            printf("Sayan Won\n");
        else if(ma==mb)
            printf("Tie\n");

    }
    return 0;
}
