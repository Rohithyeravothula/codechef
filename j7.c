#include<stdio.h>
#include<math.h>
main()
{
    int t;
    scanf("%d",&t);
    double p,s,b,v,l;
    while(t--)
    {
        scanf("%lf %lf",&p,&s);

        b=(p-sqrt((p*p)-24*s))/12;
        l=(p/4)-2*b;
        v=b*b*l;
        printf("%.2lf\n",v);
    }
    return 0;
}
