#include<stdio.h>
long long int ch(int n)
{
    return (n*(n-1))/2;
}
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,c,m,c2;
        c=0;
        c2=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&m);
            if(m==2)
                c2++;
            if(m==1 || m==0)
                c=c+1;
        }
        n=n-c;
        printf("%lld\n",ch(n)-ch(c2));
    }
    return 0;
}
