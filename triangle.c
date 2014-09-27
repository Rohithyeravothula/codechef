#include<stdio.h>
main()
{
    int t,r;
    scanf("%d",&t);
    int x1,x2,x3,y1,y2,y3;
    float a;
    float mi,ma;
    mi=10000000;
    ma=0;
    int i=0; //min index
    int j=0;  //max index
    r=1;
    while(r<=t)
    {
        scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
        a=(abs(((x1-x3)*(y2-y1))-((x1-x2)*(y3-y1))))/2;
        //printf("%f\n",a);
        if(mi>=a)
        {
            mi=a;
            i=r;
        }
        if(ma<=a)
        {
            ma=a;
            j=r;
        }
    r=r+1;
    }

    printf("%d %d\n",i,j);
    return 0;
}
