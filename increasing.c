#include<stdio.h>
main()
{
    int n,c,p,i;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
        b[i]=a[i+1]-a[i];
    c=0;
    p=0;
    for(i=0;i<n;i++)
    {
        if(b[i]==1)
            c=c+1;
        else
            c=0;
        if(p<c)
            p=c;
    }
    printf("%d\n",p+1);
}
