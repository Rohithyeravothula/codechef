#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long unsigned int n,b,r;
        scanf("%llu %llu",&n,&b);
        r=n-1;
        while(r)
        {
            if(n%b==0)
                break;

            else
            {
                n=n*r;
                r--;
            }
        }
        n=n/b;
        if(n%2==0)
            printf("Even\n");
        else
        printf("Odd\n");
    }
    return 0;
}
