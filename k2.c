#include<stdio.h>
int ch(long long int n,long long int m)
{
    long long int a[1000];
    int j,i=0;
    printf("%lld %lld\n",n,m);
    while(n)
    {
        a[i]=n%m;
        n=n/m;
        i++;
    }
    int d=0;
    for(j=0;j<i;j++)
       printf("%d",a[i]);
       printf("\n");
        /*if(a[j]!=a[i-j-1])
    {d=1;
    break;
    }*/
    if(d==0)
        return 0;
    else
        return 1;
}
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,i;
        scanf("%lld",&n);
        if(n==1)
            printf("2\n");
        else if(n==2)
            printf("3\n");
        else
        {
        for(i=2;i<n;i++)
            if(ch(n,i)==1)
        {
            printf("%lld\n",i);
            break;
        }
        }
    }
    return 0;

}
