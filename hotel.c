#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        int d[n];
        int i;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n;i++)
            scanf("%d",&d[i]);
        int fa[n];
        int fd[n];
        int j=0;
        for(i=0;i<n;i++)
        {
            fa[i]=0;
            fd[i]=0;
        }
        int k=0;
        for(i=0;i<n;i++)
        {
            int y=0;
            for(k=0;k<j;k++)
                if(a[i]>=fd[k])
                    {y=1;
                    fd[k]=d[i];
                    break;}
                if(d[i]>=fa[i])
                {
                    fa[k]=a[i];
                    y=1;
                }

            if(y==0)
                {fa[j]=a[k];
                fd[j]=d[k];
                j=j+1;}

        }
        printf("%d\n",j);
    }
    return 0;
}
