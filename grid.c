#include<stdio.h>
#include<string.h>
int a[1001][1001],b[1001][1001],c[1001][1001];
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,j;
        scanf("%d",&n);
        char s[n];
        for(i=0;i<n;i++)
        {
            scanf("%s",s);
            for(j=0;j<n;j++)
            {
                if(s[j]=='.')
                a[i][j]=1;
                else
                a[i][j]=0;
            }
        }
        for(i=0;i<n;i++)
        {
            b[n-1][i]=a[n-1][i];
            c[i][n-1]=a[i][n-1];
        }
        for(i=n-2;i>=0;i--)
        for(j=n-1;j>=0;j--)
        {
            b[i][j]=a[i][j]&b[1+i][j];
        }
        for(j=n-2;j>=0;j--)
        for(i=n-1;i>=0;i--)
        {
            c[i][j]=a[i][j]&c[i][j+1];
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
