#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int x[n];
        int I[n];
        int f[n];
        int i;
        int s=0;
        for(i=0;i<n;i++)
            {
                scanf("%d %d %d",&x[i],&I[i],&f[i]);
                int k=0;
                if(s>x[i])
                    k=(s-x[i])/f[i];
                if(s>(x[i]+k*f[i]))
                    k=k+1;
                s=x[i]+k*f[i]+I[i];
            }
        printf("%d\n",s);

    }
    return 0;
}
