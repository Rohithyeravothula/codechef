#include<stdio.h>
int pal(int n)
{
    int m=n,p=0;
    while(m)
    {
        p=p*10+m%10;
        m=m/10;
    }
    if(n==p)
        return 1;
    else
        return 0;
}
int ch(int n,int m)
{
    int l1=0,l2=0;
    int x=n,y=m;
    while(x)
    {
        x=x/10;
        l1++;
    }
    while(y)
    {
        y=y/10;
        l2++;
    }
    if(l1==l2)
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
        int i,n,u,v,result;
        scanf("%d",&n);
        for(i=2;i<n;i++)
        {
            u=n/i;
            if(pal(u) && ch(n,u) && (u*i==n))
            result=u;
        }
        printf("%d\n",result);
    }
    return 0;
}
