#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        printf("%d\n",(n>>(m-1))&1);
    }
    return 0;
}
