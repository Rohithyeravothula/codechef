#include<stdio.h>
#include<math.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,j,i,m;
        scanf("%d",&n);
        long long int s=0;
        for(i=1;i<n;i++)
        {
            int p=i*(n-i);
            long long int c=0;
            int u=(int)sqrt(p)+1;
            for(j=1;j<u;j++)
            {
                if(p%j==0)
                    c=c+2*(p/j-1);
                else
                    c=c+2*p/j;
            }
            s=s+c;
        }
        printf("%lld\n",s);
    }
    return 0;
}
