#include<stdio.h>
main()
{
    long unsigned int t,n;
    scanf("%lu",&t);
    while(t--)
    {
        scanf("%lu",&n);
        printf("%lu\n",(10*n*n*n-6*n*n));
    }
    return 0;
}
