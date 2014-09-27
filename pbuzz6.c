#include<stdio.h>
main()
{
    int n,i;
    long long int k,m;
    scanf("%d %lld",&n,&k);
    long long int a[n];
    for(i=0;i<n;i++)
    {scanf("%lld",&m);
    if(m>=k)
        m=m-k;
    a[i]=m;
    }



}
