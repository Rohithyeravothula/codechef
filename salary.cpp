#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,s,min;
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        min=a[0];
        for(i=1;i<n;i++)
            if(a[i]<min)
            min=a[i];
        s=0;
        for(i=0;i<l;i++)
            s=s+a[i]-min;
        printf("%d\n",a[i]);
    }
    return 0;
}
