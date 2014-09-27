#include<stdio.h>
#include<math.h>
int ch(long long int);
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,m;
        scanf("%lld",&n);
        m=(int)sqrt(n)+1;
        long long int i;
        int c=0;
        for(i=1;i<m;i++)
            if(n%i==0)
               {if (ch(i)==1)
                    c=c+1;
                if(ch(n/i)==1)
                c=c+1;}
        printf("%d\n",c);
    }
    return 0;
}
int ch(long long int n)
{
    int p;
    long long int m;
    m=n;
    while(m)
    {
        p=m%10;
        m=m/10;
        if((p==4) || (p==7))
            return 1;
    }
    return 0;
}
