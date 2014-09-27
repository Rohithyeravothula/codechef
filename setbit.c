#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m;
        scanf("%d %d",&n,&m);
        m--;
        printf("%d\n",n|(1<<m));
    }
    return 0;
}
