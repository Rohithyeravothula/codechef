#include<stdio.h>
#include<math.h>
int ch(int n)
{
    int i,s=1,m;
    m=(int)sqrt(n)+1;
    for(i=2;i<m;i++)
        if(n%i==0)
        s=s*i*(n/i);
    return s;
}
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,i;
        scanf("%d",&n);
        for(i=1;;i++)
        {
            m=ch(i);
            printf("%d\n",m);
            m=ch(m);
            if(m==n)
            {printf("%d\n",i);
            break;}
        }
        if(i==n)
            printf("No\n");
    }
}
