#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,m;
        scanf("%d",&n);
        int a[20500]={0};
        for(i=0;i<n;i++)
        {
            scanf("%d",&m);
            a[m+10000]++;
        }
        for(i=0;i<n;i++)
        {
            if(a[i]>1)
            a[i]--;
            else if (a[i]==1)
                {printf("%d\n",i-10000);
                a[i]=0;}
        }
    }
    return 0;
}
