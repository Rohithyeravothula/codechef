#include<stdio.h>
main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",n/5);
    n=n%5;
    printf("%d\n",n/3);
    n=n%3;
    printf("%d\n",n/2);
    n=n%2;
    printf("%d\n",n);
        return 0;
}
