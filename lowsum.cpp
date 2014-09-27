#include<iostream>
#include<stdio.h>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,j,q,m,x,y;
        scanf("%d %d",&n,&q);
        long long int a[n],b[n],c[2*n];
        for(i=0;i<n;i++)
            scanf("%lld",&a[i]);
        for(i=0;i<n;i++)
            scanf("%lld",&b[i]);
        i=0;
        j=0;
        sort(a,a+n);
        sort(b,b+n);
        reverse(a,a+n);
        reverse(b,b+n);
        for(i=0;i<q;i++)
        {
            scanf("%d",&m);

        }

    }
    return 0;
}
