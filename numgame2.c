#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    long long int n;
    while(t--)
    {
        scanf("%lld",&n);
        if(n%4==1)
            printf("ALICE\n");
        else
            printf("BOB\n");
    }
    return 0;
}
