#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,s,m;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        m=a[0];
        for(i=1;i<n;i++)
            if(a[i]<m)
            m=a[i];
        s=0;
        for(i=0;i<n;i++)
            s=s+a[i]-m;
        printf("%d\n",s);
    }
    return 0;
}
