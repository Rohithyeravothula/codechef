#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int i;
        int s;
        s=0;
        for(i=1;i<=n;i++)
        {
            int p;
            p=i;
            int v=0;
            while(p)
            {
                if(p%2==1)
                    v=v+1;
                p=p/2;
            }
            s=s+v;
        }
        printf("%d\n",s);
    }
    return 0;
}
