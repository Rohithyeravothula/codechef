#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        scanf("%d %d",&n,&k);
        int a[n],b[n],i,j;
        b[0]=0;
        scanf("%d",&a[0]);
        if(a[0]%2==0)
            b[0]=1;
        for(i=1;i<n;i++)
        {scanf("%d",&a[i]);
        b[i]=b[i-1];
        if(a[i]%2==0)
            b[i]++;
        }
        int d=0;
        for(i=0;i<n;i++)
            if(b[i]==k)
        {
            d=1;
            break;
        }
        for(i=0;i<n;i++)
            for(j=i+1;j<n;j++)
                if(b[j]-b[i]==k)
            {
                d=1;
                break;
            }
        if(d==0)
            printf("NO\n");
        else
            printf("YES\n");

    }
    return 0;
}
