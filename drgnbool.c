#include<stdio.h>
main()
{
    int t,i;
    int s1[10000],s2[10000],id1[10000],id2[10000];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        int j;
        for(j=0;j<n;j++)
            scanf("%d %d",&s1[j],&id1[j]);
        for(j=0;j<m;j++)
            scanf("%d %d",&s2[j],&id2[j]);
        int t1,t2,v;
        int k,r,s=0;
        for(j=1;j<100;j++)
        {
            t1=0;
            t2=0;
            for(r=0;r<n;r++)
            if(id1[r]==j)
                t1=t1+s1[r];
            for(r=0;r<m;r++)
            if(id2[r]==j)
                t2=t2+s2[r];
            v=0;
            if(t1<=t2)
                v=t2-t1+1;
            s=s+v;
        }
        printf("%d\n",s);

    }
}
