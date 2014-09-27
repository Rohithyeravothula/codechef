#include<stdio.h>
main()
{
    int t,d,i,m;
    scanf("%d",&t);
    while(t--)
    {
        int n,k,d;
        scanf("%d %d",&n,&k);
        if(k==0)
        {
            d=0;
            for(i=0;i<n;i++)
                {scanf("%d",&m);
                if(m%2!=0)
                    d=1;
                }
                if(d==0)
                    printf("NO\n");
                else
                    printf("YES\n");
        }
        else
        {
            int c=0;
            for(i=0;i<n;i++)
            {
                scanf("%d",&m);
                if(m%2==0)
                    c++;
            }
            if(c>=k)
            printf("YES\n");
            else
                printf("NO\n");
        }
    }
    return 0;
}
