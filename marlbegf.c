#include<stdio.h>
long long int a[1000000];
main()
{
    long long int n,q;
    scanf("%lld %lld",&n,&q);
    long long int i;

    long long int z=0;
    for(i=0;i<n;i++)
        scanf("%lld",&a[i]);

    char z[10];
    char b;
    long long int u,v,j;
    for(i=0;i<q;i++)
    {
        gets(z);
        b=z[0];
        u=

        switch(b)
        {
        case 'S':
            {
                z=0;
                for(j=u;j<=v;j++)
                z=z+a[j];
                printf("%lld\n",z);
                break;

            }
        case 'G':
            {
                a[u]=a[u]+v;
                break;
            }
        case 'T':
            {
                a[u]=a[u]-v;
                break;
            }
        }

    }
return 0;
}
