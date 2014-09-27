#include<stdio.h>
#include<math.h>

main()
{
    int n,s;
    scanf("%d",&n);
    int x1,x2,x3,y1,y2,y3,l1,l2,l3;
    s=0;
    while(n--)
    {
        scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
        l1=((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        l2=((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
        l3=((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));

        if((l1+l2==l3)||(l2+l3==l1)||(l1+l3==l2))
            s=s+1;

    }
    printf("%d\n",s);
    return 0;
}
