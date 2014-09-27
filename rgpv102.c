#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a[51];
        int n,r,i;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&r);
            a[i]=3*r;
        }
        for(i=0;i<n;i++)
        {
            scanf("%d",&r);
            a[i]=a[i]+r;
        }
        int m=0;
        for(i=0;i<n;i++)
            if(m<a[i])
            m=a[i];
        printf("%d\n",m);
    }
    return 0;
}
