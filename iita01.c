#include<stdio.h>
long long int fac(int n)
{
    long long int p=1;
    int i;
    for(i=0;i<n;i++)
        p=p*i%(1000000007);
}
main()
{
    int t;
    scanf"%d",&t);
    while(t--)
    {
        int d,i;
        long long int s=1;
        scanf("%d",&d);
        if(d<3)
        {
            for(i=1;i<d;i++)
                s=s*10;
            s=s*9;
        }
        else
        {
            s=s*9;
            for(i=1;i<d;i++)
                s=s*10;
            d=d-3;


        }
    }
}
