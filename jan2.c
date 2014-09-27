#include<stdio.h>
#include<math.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t)
    {
        t=t-1;
        long long int l,d,s,c;
        scanf("%lld %lld %lld %lld",&l,&d,&s,&c);
        float p;
        p=(log(l))/(log(s*(1+c)));
        long long int q,i,r,t;
        int h=0;
        q=(long long int)p;

        t=pow(c+1,q);
        t=t*s;
        if(t>=l)
            {
                printf("ALIVE AND KICKING\n");
                h=1;
                goto ss;

            }
        for(i=q+1;i<d;i++)
            {
                t=t*(1+c);
                if(t>=l)
                {
                    printf("ALIVE AND KICKING\n");
                    h=1;
                    break;
                }
            }
        ss:
        if(h==0)
            printf("s\n");


    }
    return 0;
}
