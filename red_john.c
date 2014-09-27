#include<stdio.h>
main()
{
    int n,t,a,b,s,u;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        a=n/4;
        b=n%4;
        s=a*b+a+1;
        u=a*((a-1)*4)/2;
        s=s+u;
        printf("%d\n",s);


    }
    return 0;
}
