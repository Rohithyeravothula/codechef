#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&m);
    int b[m];
    for(i=0;i<m;i++)
        scanf("%d",&b[i]);
    sort(a,a+n);
    sort(b,b+m);
    printf("%d\n",abs(a[0]-b[0]));
    return 0;
}
