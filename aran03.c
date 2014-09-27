#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int m=0;
        int p;
        int a=n;
        while(a)
        {
            p=a%10;
            m=m+p;
            a=a/10;
        }
        printf("%d\n",n%m);
    }
    return 0;
}
