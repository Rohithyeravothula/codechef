#include<stdio.h>
int gcd(int,int);
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int i;
        int num[n];
        for(i=0;i<n;i++)
            scanf("%d",&num[i]);
        int r=num[0];
        for(i=0;i<n;i++)
            r=gcd(r,num[i]);
        for(i=0;i<n;i++)
            {num[i]=num[i]/r;
            printf("%d ",num[i]);}
        printf("\n");
    }
    return 0;
}
int gcd(int a,int b)
{
    int c;
while(a!=0)
{
    c=a;
    a=b%a;
    b=c;
}
return b;
}
