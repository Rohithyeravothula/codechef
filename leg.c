#include<stdio.h>
main()
{
    int n,i,j,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        for(k=0;k<n;k++)
        if(5*i+3*j+2*k==n)
        printf("%d %d %d\n",i,j,k);
    return 0;
}
