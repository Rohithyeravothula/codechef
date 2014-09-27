#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a[10]={60,90,108,120,135,140,144,150,156,160};
        int n;
        scanf("%d",&n);
        int i;
        for(i=0;i<10;i++)
            if(a[i]==n)
        {printf("YES\n");
        break;}
        if(i==10)
            printf("NO\n");
    }
    return 0;
}
