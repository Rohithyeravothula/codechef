#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,c,q,l,r;
        scanf("%d %d %d",&n,&c,&q);
        while(q--)
        {
            scanf("%d %d",&l,&r);
            if((c>=l) && (c<=r))
            c=r+l-c;
        }
        printf("%d\n",c);
    }
    return 0;
}
