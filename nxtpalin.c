#include<stdio.h>
int pal(int);
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);

        while(1)
        {
            if(pal(n)==1)
                break;
            n=n+1;
        }
        printf("%d\n",n);
    }
    return 0;
}
int pal(int n)
{
    int p,m,a;
    m=n;
    a=0;
    while(m)
    {
        p=m%10;
        a=a*10+p;
        m=m/10;
    }
    if(a==n)
        return 1;
    else
        return 0;
}

