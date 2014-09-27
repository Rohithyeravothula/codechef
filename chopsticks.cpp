#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int n,i,c,k;
    scanf("%lld %lld",&n,&k);
    long long int a[n],b[n];
    for(i=0;i<n;i++)
        scanf("%lld",&a[i]);
        c=0;
    sort(a,a+n);
    i=1;
    while(i<n)
    {if((a[i]-a[i-1])<=k)
    {
        c=c+1;
        i=i+2;
    }
    else
    i++;
    }
printf("%lld\n",c);
return 0;
}
