#include<stdio.h>
main()
{
    int i,j,n,m,d;
    scanf("%d %d",&n,&m);
    int a[n][n],b[n][n];
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    for(i=0;i<(n/2);i++)
        for(j=0;j<n;j++)
        {
            d=a[i][j];
            a[i][j]=a[n-i-1][j];
            a[n-i-1][j]=d;
        }
    for(i=0;i<n;i++)
        {for(j=0;j<n;j++)
        printf("%d ",a[i][j]);
        printf("\n");
        }
}
