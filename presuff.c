#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,i,j,k;
        scanf("%d %d",&n,&m);
        int a[n],b[n],p1[m],p2[m],c[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&b[i]);
            a[i]=0;
        }
        for(i=0;i<m;i++)
        scanf("%d %d",&p1[i],&p2[i]);
        for(i=0;i<m;i++)
        {
            for(j=p1[i]-1;j<p2[i];j++)
            a[j]=1;
        }
        int f,p;
        f=0;
        p=0;
        for(i=0;i<n;i++)
        {
            if(a[i]!=0)
            {
                for(j=p;j<f;j++)
                c[j]=b[j];
                sort(c+p,c+f);
            }
            else
            c++;
        }

    }
    return 0;
}
