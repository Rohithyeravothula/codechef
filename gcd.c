#include<stdio.h>
int gcd(int a,int b)
{
    if(a==0)
        return b;
    else
        return gcd(b%a,a);
}
main()
{
    int a,b;
    while(1)
    {

        scanf("%d %d",&a,&b);
        printf("%d\n",gcd(a,b));
    }
    return 0;
}
