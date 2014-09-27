#include<stdio.h>
main()
{
    int i,j,n,m,d;
    scanf("%d %d",&n,&m);
    int a[n][n],b[n][n];
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    scanf("%d",&b[i][j]);
    while(m--)
    {
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    a[i][j]=b[i][j];
    int angle;
    scanf("%d",&angle);
    while(angle>360)
    angle=angle-360;
    if(angle==360)
    {
        for(i=0;i<n;i++)
        {for(j=0;j<n;j++)
        printf("%d ",a[i][j]);
        printf("\n");}

    }
    else if(angle==270)
    {
        for(i=0;i<n;i++)
        for(j=0;j<i;j++)
        {
            d=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=d;
        }
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
    else if(angle==180)
    {

        for(i=0;i<(n/2);i++)
        for(j=0;j<n;j++)
        {
            d=a[i][j];
            a[i][j]=a[n-i-1][j];
            a[n-i-1][j]=d;
        }
        for(i=0;i<n;i++)
        for(j=0;j<n/2;j++)
        {
            d=a[i][j];
            a[i][j]=a[i][n-j-1];
            a[i][n-j-1]=d;
        }
        for(i=0;i<n;i++)
        {for(j=0;j<n;j++)
        printf("%d ",a[i][j]);
        printf("\n");}


    }
    else if(angle==90)
    {
        for(i=0;i<n;i++)
        for(j=0;j<i;j++)
        {
            d=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=d;
        }
        for(i=0;i<n;i++)
        for(j=0;j<n/2;j++)
        {
            d=a[i][j];
            a[i][j]=a[i][n-j-1];
            a[i][n-j-1]=d;
        }
        for(i=0;i<n;i++)
        {for(j=0;j<n;j++)
        printf("%d ",a[i][j]);
        printf("\n");}
    }
    }
    return 0;
}
