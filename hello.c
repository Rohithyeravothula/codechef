#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        float d,u,n;
        scanf("%f %f %f",&d,&u,&n);
        float min=d*u;
        int min_i=1;
        int i;
        for(i=0;i<n;i++)
        {
            int m;
            float r,c;
            scanf("%d %f %f",&m,&r,&c);
            float min_r;
            min_r=min*m;
            int cost;
            cost=(c+u*r)*u;
            if(cost<=min_r)
                {min=cost/u;
                min_i=i+1;}
        }
        printf("%d\n",min_i);
    }
    return 0;
}
