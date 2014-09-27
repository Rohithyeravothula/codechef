#include<stdio.h>
main()
{
    int t,n,m,i,j,d,k;
    scanf("%d",&t);
    while(t--)
    {

        scanf("%d %d",&n,&m);
        int a[n];
        for(i=0;i<n;i++)
            a[i]=0;
        for(i=0;i<m;i++)
            {scanf("%d",&k);
            a[k-1]=1;}
        d=0;
        for(i=0;i<n;i++)
        {
            if((a[i]==0) && (d==0))
            {a[i]=2;
            d=1;}
            else if((a[i]==0) && (d==1))
            {
                a[i]=3;
                d=0;
            }
        }
        for(i=0;i<n;i++)
            if(a[i]==2)
            printf("%d ",i+1);
        printf("\n");
        for(i=0;i<n;i++)
            if(a[i]==3)
            printf("%d ",i+1);
        printf("\n");
    }
    return 0;
}
