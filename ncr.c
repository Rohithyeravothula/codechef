#include<stdio.h>
int fac(int n,int r)
{
    if(n==r)
        return 1;
    else if(r==1)
        return n;
    return fac(n-1,r)+fac(n-1,r-1);
}
main()
{
    int n,r;
    while(1)
    {scanf("%d %d",&n,&r);
    printf("%d\n",fac(n,r));}
}
