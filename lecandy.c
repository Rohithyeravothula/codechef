#include<stdio.h>
main()
{
    int t,i,n,j,v;
    long long int c,s;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %lld",&n,&c);
        s=0;
        for(j=0;j<n;j++)
        {
            scanf("%d",&v);
            s=s+v;

        }

        if(s>c)
            printf("No\n");
        else
            printf("Yes\n");

    }
    return 0;

}
