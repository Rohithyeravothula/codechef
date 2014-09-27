#include<stdio.h>
main()
{
    int t,n,m,p1,vi,ci,s;
    scanf("%d",&t);
    int a[14][110]={0};
    int p[109]={0};
    int i,j,ma;
    while(t--)
    {
        scanf("%d %d",&n,&m);
        for(i=0;i<m;i++)
            scanf("%d",&p[i]);
        for(i=0;i<n;i++)
        {
            scanf("%d",&ci);
            for(j=0;j<ci;j++)
                scanf("%d",&a[i][j]);
        }
        s=0;
        for(i=0;i<m;i++)
        {
            for(j=0;j<m;j++)
                if(a[p[i]][j]>=ma)
                ma=a[p[i]][j];
            s=s+ma;
        }
        printf("%d\n",s);
        for(i=0;i<100;i++)
            p[i]=0;
    }
    return 0;
}
