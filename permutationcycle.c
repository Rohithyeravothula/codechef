
#include<stdio.h>
main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    i=0;
    while(i<l)
    {
        j=0;
        printf("%d %d ",i+1,a[i]);
        while(a[j]!=a[i] || j<n)
        {
            printf("%d ",a[j]);
            j=a[j];
        }
    }
}
