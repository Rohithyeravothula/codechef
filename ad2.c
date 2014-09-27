#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    for(;t--;)
    {
        int n;
        scanf("%d",&n);
        printf("%d\n",n/3);
    }
    return 0;
}
