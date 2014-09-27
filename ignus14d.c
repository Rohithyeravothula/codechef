#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,q,id,x,i,j;
        scanf("%d %d",&n,&q);
        int a[n];
        j=0;
        while(q--)
        {
            scanf("%d %d",&x,&id);
            if(x==1)
                {a[j]=id;
                j=(j+1)%n;}
            else
            {
                for(i=0;i<n;i++)
                    if(a[i]==id)
                    {printf("YES\n");
                    break;}
                if(i==n)
                    printf("NO\n");
            }

        }
    }
    return 0;
}
