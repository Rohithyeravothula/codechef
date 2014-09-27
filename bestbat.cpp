#include<stdio.h>
#include<math.h>
#include<iostream>
#include<algorithm>
using namespace std;
int fac(int n,int r)
{
    if(n==r)
        return 1;
    if(r==1)
        return n;
    return fac(n-1,r)+fac(n-1,r-1);
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int f,m,k,i;
        int a[11];
        for(i=0;i<11;i++)
            scanf("%d",&a[i]);
        scanf("%d",&k);
        sort(a,a+11);
        f=0;
        for(i=0;i<11;i++)
            if(a[11-k]==a[i])
            f++;
        m=1;
        for(i=1;i<k;i++)
        if(a[11-k]==a[11-k+i])
            m++;
        //printf("%d %d\n",f,m);
        if(f>1)
            printf("%d\n",fac(f,m));
        else
            printf("1\n");
    }
    return 0;
}
