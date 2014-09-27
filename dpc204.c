#include<stdio.h>
main()
{
    while(1)
    {
        long long unsigned int a,b,x,y,z;
        scanf("%llu %llu",&a,&b);
        if((a==0) && (b==0))
            break;
        int i=0;
        x=1;
        y=1;
        z=2;
        i=0;
        while(1)
        {
            z=x+y;
            if ((z>=a) && (z<=b))
                i=i+1;
            if(z>b)
                break;
            x=y;
            y=z;
        }
        printf("%d\n",i);
    }
    return 0;
}
