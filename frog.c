#include<stdio.h>
main()
{
int n,p;
scanf("%d %d",&n,&p);
long long int a[n],b[n],c[n];
for(i=0;i<n;i++)
    scanf("%lld",&a[i]);
for(i=1;i<n;i++)
    b[i]=a[i]-a[i-1];
j=0;
for(i=1;i<n;i++)
if(b[i]>k)
{
    c[j]=i;
    j=j+1;
}
for(i=0;i<p;i++)
{
    scanf("%d",&m);
}
}
