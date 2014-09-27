#include<stdio.h>
main()
{
    int n,i,c,d,p;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    c=0;
    for(i=0;i<n;i++)
    {
        p=a[a[i]-1];
        if(p==a[i])
            c=c+1;
        while(a[i]!=p)
            {
                if(p>=n-1)
                    break;
                //printf("%d ",p);
                p=a[p-1];
                d=1;
            }
            printf("\n");
        if(p==a[i])
            c=c+1;
    }
    printf("%d\n",c);

}
