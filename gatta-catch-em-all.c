#include<stdio.h>
main()
{
    int n,m,k=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&m);
        if(k<m)
            k=m;
    }
    printf("%d\n",k+2);
    return 0;
}
