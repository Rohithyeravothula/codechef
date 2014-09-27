#include<stdio.h>
#include<string.h>
int a[1020][1020],b[1020][1020];
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,q,i,j,x1,x2,y1,y2;
        scanf("%d %d %d",&n,&m,&q);
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                scanf("%d",&a[i][j]);
        for(i=0;i<n;i++)
            for(j=0;j<m;j++)
                scanf("%d",&b[i][j]);
        while(q--)
        {
            int c=0;
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        for(i=x1-1;i<x2;i++)
            for(j=y1-1;j<y2;j++)
            {
                if(a[i][j]==b[i][j])
                c++;
            }
            printf("%d\n",c);
        }

    }
    return 0;
}
