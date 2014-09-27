#include<stdio.h>
main()
{

    long long int s1,s2,s3,s4;
    int x1,x2,a1,a2,y1,y2,b1,b2;
    int t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        scanf("%d %d %d %d",&a1,&b1,&a2,&b2);
        s1=(x2-x1)*(y2-y1);
        s2=(a2-a1)*(b2-b1);
        s3=0;
        if((y2>b1) && (x2>a1))
            s3=(y2-b1)*(x2-a1);
        s4=s1+s2-s3;
        printf("%lld\n",s4);
    }
    return 0;
}
