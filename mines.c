#include<stdio.h>
long int m[1000][1000]={0};
main()
{

    int r,c;
    long long int s=0;
    scanf("%d %d",&r,&c);
    int i,j;
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
    {
        scanf("%d",&m[i][j]);
    }


    int x1,x2,y1,y2;
    long int q,g;
    scanf("%ld",&q);
    for(g=0;g<q;g++)
    {   s=0;
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        j=y1-1;
        for(i=x1-1;i<x2;i++)
        for(j=y1-1;j<y2;j++)
            s=s+m[i][j];
        printf("%lld\n",s);

    }
}
