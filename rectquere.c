#include<stdio.h>
main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
    int b[n][n];
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        b[i][j]=b[i-1][j]+b[i][j-1]-b[i-1][j-1];
}
