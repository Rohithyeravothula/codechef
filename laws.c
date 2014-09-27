#include<stdio.h>
int ch(int n)
{
    int a[10];
    int i,j=0;
    while(n)
    {a[j]=n%2;
    n=n/2;
    j++;}
    for(i=j-1;i>=0;i--)
        printf("%d",a[i]);
}
main()
{
    int i,n,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int l[n];
    for(i=0;i<n;i++)
        l[i]=1;
    for(i=1;i<n;i++)
        for(j=0;j<n;j++)
        if(a[i]>a[j] && l[i]<l[j]+1)
        l[i]=l[j]+1;
    int m=l[0];
    for(i=0;i<n;i++)
        if(m<l[i])
        m=l[i];
    ch(m);
    return 0;
}
