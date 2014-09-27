#include<stdio.h>
main()
{
    int t,n,i;
    long long int c;
    scanf("%d",&t);
    while(t--)
    {
        c=0;
        scanf("%d",&n);
        char a[n];
        scanf("%s",a);
        for(i=0;i<n;i++)
            if(a[i]=='1')
            c++;
        printf("%lld\n",(c*(c+1))/2);
    }
    return 0;
}
