#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t---)
    {
        int n;
        scanf("%d",&n);
        n=32-n;
        if(n%3==0)
        printf("CHETU %d",1+(n/3));
        else
        printf("NISHU %d",1+(n/3));
    }
    return 0;
}
