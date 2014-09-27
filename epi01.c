#include<stdio.h>
main()
{
     int n;
    scanf("%d",&n);
     int c=0;
    while(n)
    {
        c++;
        n=n&(n-1);
    }
    printf("%d\n",c);
    return 0;
}
