#include<stdio.h>
main()
{

    int t,i;
    long long int n,c,p;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld %lld",&n,&c);
        p=n/c;
        if(p>0)
        printf("%lld\n",p-1);
        else
        printf("0\n");
    }
return 0;
}
