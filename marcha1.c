#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,q,i,j,k,c=0,z=0;
        scanf("%d %d",&n,&q);
        int a[n];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=1;i<=n;i++)
        {
                for(k=0;k<n-i;k++)
            {
                int s=0;
                for(j=0;j<i;j++)
                s=s+a[k+j];
                if(s==q)
                    {
                        z=1;
                        goto aa;
                    }
            }

        }
        aa:
            if(z==0)
                printf("No\n");
            else
                printf("Yes\n");
    }
}
