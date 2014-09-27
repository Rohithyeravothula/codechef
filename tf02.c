#include<stdio.h>
#include<math.h>
#define M 1009
long long fast_pow(int a,int n)
{
    long long result = 1;
    long long power = n;
    long long value = a;
    while(power>0)
    {
        if(power&1)
            {result = result*value;
            result = result%M;}
        value = value*value;
        value = value%M;
        power /= 2;
        //power >>= 1;
    }
    return result;
}
main()
{
int n,m;
scanf("%d %lld",&n,&m);
long long int a[n],s,p;
for(i=0;i<n;i++)
    scanf("%lld",&a[i]);
for(i=0;i<n;i++)
{

}
for(i=0;i<n;i++)
{
    for(i=0;i<n;i++)
    {


    }

}
}
