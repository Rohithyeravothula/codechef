#include<stdio.h>
main()
{
    unsigned int n;
    scanf("%u",&n);
    int c=0;
    while(n)
    {
        n=n&(n-1);
        c=c+1;
    }
    printf("%d\n",c);
}
