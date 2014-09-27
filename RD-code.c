#include<stdio.h>
main()
{

    int t,i,x,s;
    scanf("%d",&t);
    long long int n,m;
    char *a[10]={"-----",".----","..---","...--","....-",".....","-....","--...","---..","----."};
    int b[10]={0,1,2,3,4,5,4,3,2,1};
    for(i=0;i<t;i++)
    {
        scanf("%lld",&n);
        if(n==0)
            {printf("-----\n");
             printf("0\n");
            }
        m=0;
        while(n!=0)
        {
            m=m*10;
            m=m+n%10;
            n=n/10;
        }
        s=0;

        while(m!=0)
        {
            x=m%10;
            m=m/10;
            printf("%s",a[x]);
            s=s+b[x];

        }
        printf("\n%d\n",s);

    }
    return 0;
}
