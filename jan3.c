#include<stdio.h>
#include<math.h>
main()
{
    long long int l,d,s,c,i,p;
    float q;
    int t,w;
    scanf("%d",&t);
    while(t)
    {
        t--;
        scanf("%lld %lld %lld %lld",&l,&d,&s,&c);
        p=s;

        if(p>=l)
        {
            printf("ALIVE AND KICKING\n");
            goto aa;
        }
        for(i=0;i<d-1;i++)
        {
            p=p*(1+c);
            if(p>=l)
            {
                printf("ALIVE AND KICKING\n");
                goto aa;
            }
        }
        printf("DEAD AND ROTTING\n");
        aa:
            w=0;


    }
    return 0;
}
