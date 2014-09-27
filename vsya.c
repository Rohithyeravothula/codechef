#include<stdio.h>
main()
{
    int n,m,d;
    scanf("%d %d",&n,&m);
    int s=n;
    while(1)
    {
        s=s+(n/m);
        d=(n/m)+n%m;
        n=d;
        if(n<m)
        break;
    }
    printf("%d\n",s);
    return 0;
}
