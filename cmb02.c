#include<stdio.h>
int pal(int);
main()
{
int t;
scanf("%d",&t);
while(t--)
{
    int n,i;
    scanf("%d",&n);
    i=1;
    n++;
    while(1)
    {
        if(pal(n)==1)
            break;
        n=n+1;
        i=i+1;
    }
    printf("%d\n",n);
}
return 0;
}
int pal(int n)
{
    int m,r,i,p;
    r=n;
    m=0;
    while(r)
    {
        p=r%10;
        m=m*10+p;
        r=r/10;
    }
    //printf("%d",m);
    if(m==n)
        return 1;
    else
        return 0;

}
