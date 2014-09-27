#include<stdio.h>
unsigned int ch(int);
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    unsigned int a;
    scanf("%u",&a);
    int i;
    int u=0;
    for(i=20;i<a;i++)
        if(ch(i)==a)
        {
            printf("%u\n",i);
            u=1;
            break;
        }
    if(u==0)
        printf("NONE\n");
    }
    return 0;
}
unsigned int ch(int n)
{
    unsigned int p,m;
    m=n;
    unsigned int v=n;
    while(m)
    {
        p=m%10;
        v=v+p;
        m=m/10;
    }
    return v;
}
