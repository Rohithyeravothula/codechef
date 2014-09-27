#include<stdio.h>
main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int b[n];
    for(i=0;i<n;i++)
        b[i]=1;
    b[0]=1;
    for(i=1;i<n;i++)
    {
        if(a[i-1]<a[i])
        b[i]=b[i-1]+1;
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        b[i]=b[i+1]+1;
    }
    int s=0;
    for(i=0;i<n;i++)
        s=s+b[i];
    printf("%d\n",s);
    return 0;
}
