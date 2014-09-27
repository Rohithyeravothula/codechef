#include<stdio.h>
#include<string.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,j;
        scanf("%d",&n);
        char s[n];
        int a[n][n],b[n][n],c[n][n];
        for(i=0;i<n;i++)
        {
            scanf("%s",s);
            for(j=0;j<n;j++)
            {
                if(s[j]=='.')
                a[i][j]=0;
                else
                a[i][j]=1;
            }
        }
        for(i=0;i<n;i++)
        {
            if(a[n-1][i]==1)
            b[n-1][i]=0;
            else
            b[n-1][i]=1;

            if(a[i][n-1]==1)
            c[i][n-1]=0;
            else
            c[i][n-1]=1;
        }
        for(i=n-2;i>=0;i--)
        for(j=n-1;j>=0;j--)
        {
            if(a[i][j]==1)
            b[i][j]=0;
            else
            {
                if(b[1+i][j]==1)
                b[i][j]=1;
                else
                b[i][j]=0;
            }
        }
        for(j=n-2;j>=0;j--)
        for(i=n-1;i>=0;i--)
        {
            if(a[i][j]==1)
            c[i][j]=0;
            else
            {
                if(c[i][j+1]==1)
                c[i][j]=1;
                else
                c[i][j]=0;
            }
        }

    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    b[i][j]=b[i][j]&c[i][j];
    int cnt=0;
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    if(b[i][j]==1)
    cnt++;
    printf("%d\n",cnt);

    }
    return 0;
}
