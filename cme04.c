#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x1,x2,y1,y2,s1,s2;
        scanf("%d %d %d %d",&x1,&x2,&y1,&y2);
        if(((x1%y1==0)&&(x2%y2==0)) || ((x1%y2==0)&&(x2%y1==0)))
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
