#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
int main()
{
    long long int n,p,t;
    while(scanf("%lld",&n)!=EOF)
    {
        p=1+log2(n);
        printf("%lld\n",n-n/p);
    }
    return 0;
}
