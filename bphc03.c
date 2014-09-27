#include<stdio.h>
main()
{
    int n;
    scanf("%d",&n);
    int a[n][n],b[n][n];
    int i,j,c=0;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        b[i][j]=0;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    b[0][0]=1;
    if(b[0][1]==1)
        b[0][1]=0;
    if(b[1][0]==1)
        b[1][0]=0;
    for(i=1;i<n;i++)
        {
            if(a[0][i]==1)
                b[0][i]=0;
            else
                b[0][i]=b[0][i-1];
        }
    for(i=1;i<n;i++)
        {
            if(a[i][0]==1)
                b[i][0]=0;
            else
                b[i][0]=b[i-1][0];
        }
    for(i=1;i<n;i++)
        for(j=1;j<n;j++)
        {
            if(a[i][j]==1)
                b[i][j]=0;
            else
                b[i][j]=b[i-1][j]+b[i][j-1];
        }
    for(i=0;i<n;i++)
    {for(j=0;j<n;j++)
        printf("%d ",b[i][j]);
    printf("\n");}
    return 0;

}
