#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x1,y1,x2,y2,x3,y3;
        int ch,cs,hs,r;
        scanf("%d",&r);
        r=r*r;
        scanf("%d %d",&x1,&y1);
        scanf("%d %d",&x2,&y2);
        scanf("%d %d",&x3,&y3);
        ch=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
        cs=((x3-x1)*(x3-x1))+((y3-y1)*(y3-y1));
        hs=((x3-x2)*(x3-x2))+((y3-y2)*(y3-y2));
        //printf("%d %d %d\n",ch,hs,cs);
        if((ch<=r) && (cs<=r) && (hs<=r))
            printf("yes\n");
        else if((ch<=r) && (hs<=r) &&(cs>=r))
            printf("yes\n");
        else if((ch<=r)  && (cs<=r) && (hs>=r))
            printf("yes\n");
        else if ((ch>=r) && (cs<=r) && (hs<=r))
            printf("yes\n");
        else if ((ch<=r) && (hs>=r) && (cs>=r))
            printf("no\n");
        else if((ch>=r) && (hs>=r) &&(cs<r))
            printf("no\n");
        else if ((ch<=r) && (hs<=r) && (cs>=r))
            printf("no\n");
        else if((ch>=r) && (hs>=r) && (cs>=r))
            printf("no\n");

    }
    return 0;
}
