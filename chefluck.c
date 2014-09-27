#include<stdio.h>
main()
{
int t;
scanf("%d",&t);
while(t)
{
    t=t-1;
    long long int n;
    scanf("%lld",&n);
    if((n<7) && (n!=4))
        {
            printf("-1\n");
            goto aa;
        }
    if(n==4)
    {
        printf("0\n");
        goto aa;
    }
    n=n%7;
    switch(n)
        {
        case 0:
        {
            printf("%lld\n",n);
            break;
        }
        case 1:
            {printf("%lld\n",n-7);
             break;
            }
        case 2:
            {
                if(n>=16)
                    printf("%lld\n",n-16);
                else
                    printf("-1\n");
                break;
            }
        case 3:
            {
                if(n>=24)
                    printf("%lld\n",n-24);
                else
                    printf("-1\n");
                break;

            }
        case 4:
            {
                printf("%lld\n",n-4);
                break;
            }
        case 5:
            {
                printf("%lld\n",n-12);
                break;
            }
        case 6:
            {
                if(n>=20)
                    printf("%lld",n-20);
                else
                    printf("-1\n");
                break;
            }
        }
    aa:
        n=0;
}
return 0;

}
