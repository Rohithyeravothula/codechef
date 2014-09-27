#include<stdio.h>
main()
{
int t,i;
long long int n,a,j,r;
scanf("%d",&t);
for(i=0;i<t;i++)
{
    scanf("%lld",&n);
    for(j=0;j<n;j++)
        scanf("%lld",&a);
    r=(n*(n-1))/2;
    printf("%lld\n",r);

}
return 0;
}
