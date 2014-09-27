#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        int b[n];
        int i,m;
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(i=0;i<n-1;i++)
            b[i]=a[i+1]-a[i];
        b[n-1]=0;
        for(i=0;i<n;i++)
            if()
    }
    return 0;
}
