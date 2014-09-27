#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,j,k;
        scanf("%d",&n);
        int a[n],b[n];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n;i++)
            scanf("%d",&b[i]);
        int c[1050]={0};
        for(i=0;i<n;i++)
            c[b[i]]++;
        int r=0;
        for(i=0;i<n;i++)
            if(c[a[i]]!=0)
        {
            r=r+2;
            a[i]=0;
        }
       for(i=0;i<n;i++)
        if(c[2*a[i]]!=0)
        {r=r+1;
        a[i]=0;
        }
        //printf("%d\n",r);
            for(j=0;j<n;j++)
            for(k=j+1;k<n;k++)
            for(i=0;i<n;i++)
            if(a[i]!=0 && a[i]==b[j]+b[k])
                {
                    a[i]=0;
                    r=r+2;
                    break;
                }
        printf("%d\n",r);
    }
    return 0;
}
