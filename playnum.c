#include<stdio.h>
#include<string.h>
#define M 1000050
int a[M];
int rev(int n)
{
    int a,b;
    a=n;
    b=0;
    while(a)
    {
        b=b*10+a%10;
        a=a/10;
    }
    return b;
}
main()
{

    int j=0,i=0,m;
    while(j<M)
    {
        m=rev(i);
        while(m)
        {
            a[j]=m%10;
            m=m/10;
            j++;
        }
        i++;
    }
    int q,n;
    /*scanf("%d",&q);
    while(q--)
    {
        scanf("%d",&n);
        printf("%d\n",a[n]);
    }*/
    for(i=0;i<100;i++)
        printf("%d",a[i]);
    return 0;
}
