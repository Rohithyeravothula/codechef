#include<stdio.h>
main()
{
    int t,n;
    scanf("%d %d",&t,&n);
    while(t--)
    {
        int mx,mi,m;
        int i;
        mx=0;
        mi=120;
        for(i=0;i<n;i++)
        {
            scanf("%d",&m);
            if(mi>m)
                mi=m;
            if(mx<m)
                mx=m;
        }
        printf("%d\n",mx-mi);
    }
    return 0;
}
