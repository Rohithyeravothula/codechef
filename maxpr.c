#include<stdio.h>
#define M 1000000007
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,j,k,l;
        scanf("%d",&n);
        int a[n],b[n];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        if(n!=1)
        {
        for(i=0;i<n-1;i++)
        {
            int d[110];
            for(j=0;j<100;j++)
            if((i+j)<n)
                d[j]=a[i+j];
            int x=d[1]-d[0];
            for(k=1;k<j;k++)
            {
                // printf("%d \n",k);
                if((d[k-1]+x)!=d[k])
                    {

                        break;
                    }
            }
            if(x!=0)
            b[i]=k;
            else
            {
                for(l=k;l<n;l++)
                if((d[l-1]+x)!=d[l])
                    break;
                b[i]=l;
            }

        }
        b[n-1]=1;
        long long int s=0;
        for(i=0;i<n;i++)
            printf("%d ",b[i]);
        printf("\n");
        for(i=0;i<n;i++)
        {
            s=(s+b[i])%M;
        }
        //printf("%lld\n",s);
        s=(((n*(n+1))/2)-s)%M;
        printf("%lld\n",s);
        }
        else
            printf("0\n");

    }
    return 0;
}
