#include<stdio.h>
#include<math.h>
main()
{
    int t;
    scanf("%d",&t);
    long long int c;
    while(t--)
    {
        int i,j,m;
        int n;
        scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        a[i]=i;
    a[1]=0;
    m=(int)sqrt(n)+1;
    for(j=2;j<m;j++)
    {
        int e;
        for(i=2;i<n;i++)
    {

        e=j*i;
        if(e<n)
        a[e]=0;
        else
            break;
    }
    }
    c=0;
    for(i=0;i<n;i++)
        if(a[i]!=0)
        c=c+a[i];
    printf("%lld\n",c);
    }
    return 0;
}
