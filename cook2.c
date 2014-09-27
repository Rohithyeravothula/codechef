#include<stdio.h>
int gcd(int a,int b)
{
    if(a==0)
        return b;
    else
        return gcd(b%a,a);
}
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int m,n,i;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        m=a[0];
        for(i=0;i<n;i++)
        m=gcd(m,a[i]);
        if(m==1)
        printf("%d\n",n);
        else
        printf("-1\n");
    }
    return 0;
}
