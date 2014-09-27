#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a[10];
        int i,j,n,p,k;
        for(i=0;i<10;i++)
            scanf("%d",&a[i]);
        k=0;
        for(i=1;i<10;i++)
            if(a[i]==0)
            {k=1;
            break;}
        if(k==1)
            printf("%d\n",i);
        else
        {
            for(i=0;i<10;i++)
                if(a[i]!=1)
                k=1;
            if(k==0)
                printf("22\n");
            else
            {
                k=0;
                n=a[0];
                for(i=1;i<10;i++)
                    if(a[i]<=n)
                    {n=a[i];
                    k=1;
                    break;
                    }
                if(k==0)
                {
                    p=10;
                    for(j=0;j<n;j++)
                        p=p*10;
                    printf("%d\n",p);
                }
                else
                {
                    p=i;
                    for(j=0;j<n;j++)
                        p=p*10+(i);
                    printf("%d\n",p);
                }
            }
        }
    }
    return 0;

}
