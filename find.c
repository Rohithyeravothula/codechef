#include<stdio.h>
long long int a[2000010]={0};

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
          int n,m,i;
        for(i=0;i<2000010;i++)
            a[i]=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&m);
            a[m+1000000]++;
        }
        long long int s=0;
        for(i=0;i<2000010;i++)
            s=s+a[i]*(a[i]+1)/2;
        printf("%lld\n",s);
    }
    return 0;
}
