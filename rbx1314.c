#include<stdio.h>
int pal(long long int n);
long long int rev(long long int);
main()
{

        long long int n;
        int i;
        int e[13]={196,295,394,493,592,689,691,788,790,879,887,978,986};
        while(scanf("%lld",&n)!=EOF)
        {int d=0;
        for(i=0;i<13;i++)
            if(n==e[i])
            {d=1;
            break;}
        if(d==0)
            {i=0;
                while(1)
                {if(pal(n)==1)
                    break;
                n=n+rev(n);
                i++;
                }
            printf("%lld\n",n);
            }
        else
            printf("NONE\n");}
        return 0;
}
int pal(long long int n)
{
    int i,p;
    long long int m,r;
    m=0;
    r=n;
    while(r)
    {
        p=r%10;
        m=m*10+p;
        r=r/10;
    }

    if(m==n)
        return 1;
    else
        return 0;
}
long long int rev(long long int n)
{
    int i,p;
    long long int m,r;
    m=0;
    r=n;
    while(r)
    {
        p=r%10;
        m=m*10+p;
        r=r/10;
    }
    return m;

}

