#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,i,j,k,l;
        scanf("%d %d",&n,&m);
        char a[n][m];
        for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        scanf("%c",&a[i][j]);
        for(i=0;i<n;i++)
        for(j=0;j<m;i++)
        {
            if(a[i][j]=='L')
            {
                for(k=0;k<m;k++)
                if(a[i][k]!='E')
                a[i][k]='K';
                for(k=0;k<i;k++)
                if(a[k][j]=='E')
                a[k][j]='K';


            }
        }
    }
}
