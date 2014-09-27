#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d",&n);
        m=n/2;
        m=(m*(m+1));
        if(n%2==0)
            m=m-(n/2);
        printf("%d\n",m);
    }
    return 0;

}
