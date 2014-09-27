#include<stdio.h>
#define M 1000000007
#define V 1000000008/2
main()
{
int t;
scanf("%d",&t);
while(t--)
{
    long long int n,m;
    scanf("%lld",&n);
    printf("%lld\n",(((n*n)-3*n+2)*V)%M);
}
return 0;
}
