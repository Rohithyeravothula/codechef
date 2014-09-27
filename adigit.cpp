#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
main()
{
    int n,m,i,j;
    scanf("%d %d",&n,&m);
    char dig[n+1];
    scanf("%s",dig);
    int a[n];
    for(i=0;i<n;i++)
        a[i]=dig[i]-'0';
    int b[n];
    int k;
    for(i=0;i<n;i++)
    {
        int s=0;
        for(j=0;j<i;j++)
            s=s+abs(a[i]-a[j]);
        b[i]=s;
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&k);
        printf("%d\n",b[k-1]);
    }
    return 0;
}
