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
        int a[n];
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        int c=0;
        for(i=0;i<n;i++)
            if(a[i]>=(i+1))
                c=c+(a[i]/(i+1));
        if(c%2==1)
            printf("ALICE\n");
        else
            printf("BOB\n");
    }
    return 0;
}
