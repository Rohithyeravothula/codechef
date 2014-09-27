#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int l,m,n;
        scanf("%d",&n);
        m=0;
        int i=1;
        int mi=0;
        while(n--)
        {
            scanf("%d",&l);
            if(m<l)
                {m=l;
                mi=i;}
            i=i+1;
        }
        printf("%d\n",mi);
    }
    return 0;

}
