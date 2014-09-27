#include<stdio.h>
main()
{
    int t,i,j;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        if(n%2==0)
        {
            int a=n/10;
            int b=n/12;
            if
                printf("%d\n",a+b);
            else
            printf("-1\n");
        }
        else
            printf("-1\n");
    }
    return 0;
}
