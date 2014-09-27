#include<stdio.h>
int gcd(int a,int b)
{
    if(a==0)
        return b;
    else
        return gcd(b%a,a);
}
main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    long long int c=0;
    int j,k;
    for(i=0;i<n;i++)
        for(j=1+i;j<n;j++)
        for(k=1+j;k<n;k++)
    if(gcd(gcd(a[j],a[k]),a[i])==1)
        c++;
    printf("%lld\n",c);
    return 0;
}
