#include<stdio.h>
#include<math.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        while(n--)
        {int x,y;
        scanf("%d %d",&x,&y);
        double d=sqrt(x*x+y*y);
        if(d<=60.0)
            printf("1 ");
        else if(d>60 && d<=120.0)
            printf("2 ");
        else if(d>120 && d<=180.0)
            printf("3 ");
        else if(d>180 && d<=200.0)
            printf("4 ");
        }
        printf("\n");
    }
    return 0;
}
