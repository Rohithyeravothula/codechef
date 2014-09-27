#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,i,k=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    for(i=0;i<n;i++)
    a[i]=a[i]+n-i;
    k=a[0];
    for(i=0;i<n;i++)
        if(k<a[i])
        k=a[i];
    printf("%d\n",k+1);
    return 0;
}
