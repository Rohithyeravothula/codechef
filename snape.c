#include<math.h>
#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        printf("%f %f\n",sqrt(b*b-a*a),sqrt(a*a+b*b));
    }
    return 0;
}
