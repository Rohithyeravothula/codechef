#include<stdio.h>
#include<math.h>
int pr(int);
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int l,r;
        scanf("%d",&l);
        scanf("%d",&r);
        int i,s;
        s=0;
        for(i=l;i<=r;i++)
        {
            int n,m,p;
            n=i;
            m=0;
            while(n)
            {
                p=n%10;
                m=m+p;
                n=n/10;
            }

            if(pr(m)==1)
                s=s+1;
        }
        printf("%d\n",s);
    }
}
int pr(int n)
{
    if(n==1)
        return 0;
    if((n==2) || (n==3))
        return 1;
    int i,d,l;
    d=0;
    l=2+sqrt(n);
    for(i=2;i<l;i++)
        if(n%i==0)
    {
        d=1;
        break;
    }
    if(d==0)
        return 1;
    else
        return 0;

}
