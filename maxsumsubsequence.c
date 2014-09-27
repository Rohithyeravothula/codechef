#include<stdio.h>
int max(int a,int b)
{
    if(a>=b)
    return a;
    else
    return b;
}
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int i,a[n],s[n];
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        s[0]=a[0];
        for(i=1;i<n;i++)
            s[i]=max(s[i-1]*a[i],a[i]);
        int m=s[0],j=0;
        for(i=0;i<n;i++)
        if(m<s[i])
        m=s[i];
        printf("%d\n",m);
    }
    return 0;
}
