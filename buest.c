#include<stdio.h>
main()
{
    int n,m;
    while(scanf("%d",&n)!=EOF)
    {
        m=(n/2)+(n/3)+(n/4);
        printf("%d\n",m);
    }
    return 0;
}
