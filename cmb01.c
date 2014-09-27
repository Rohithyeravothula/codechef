#include<stdio.h>
int rev(int);
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int p1,p2;
        scanf("%d %d",&p1,&p2);
        p1=rev(p1);
        p2=rev(p2);
        printf("%d\n",rev(p1+p2));
    }
    return 0;
}
int rev(int n)
{
    int m,i,r,p;
    r=n;
    m=0;
    while(r)
    {
        p=r%10;
        m=m*10+p;
        r=r/10;
    }
    return m;

}
