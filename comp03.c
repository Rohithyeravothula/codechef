#include<stdio.h>
#include<math.h>
int rev(int);
int len(int);
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,e;
        scanf("%d %d",&n,&e);
        int m=n;
        int l=len(n);
        int p=pow(e,l);
        p=p/e;
        m=rev(n);
        int s=0;
        int v;
        while(m)
        {
            v=m%10;
            s=s+p*v;
            p=p/e;
            m=m/10;
        }
        printf("%c",s);
    }
    printf("\n");
    return 0;
}



int rev(int n)
{
    int m,p,a;
    m=0;
    p=n;
    while(p)
    {
        a=p%10;
        m=m*10+a;
        p=p/10;
    }
    return m;
}
int len(int n)
{
    int m,l;
    m=n;
    l=0;
    while(m)
    {
        m=m/10;
        l=l+1;
    }
    return l;
}
