#include<stdio.h>
#include<math.h>
int ch(int n)
{
double a;
a=sqrt(n);
if()
    return 1;
else
    return 0;
}
int fib(int n)
{
    if((ch(5*n*n+4)) || (ch(5*n*n-4)))
        return 1;
    else
        return 0;
}
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        if(fib(n)==1)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
