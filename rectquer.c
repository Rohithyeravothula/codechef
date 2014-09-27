#include<stdio.h>
int a[300][300];
int dist(int,int,int,int);
main()
{
    int n;
    scanf("%d",&n);
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    long long int q;
    int x1,x2,y1,y2;
    scanf("%lld",&q);
    long long int r;
    for(r=0;r<q;r++)
    {
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        printf("%d\n",dist(x1,y1,x2,y2));
    }
    return 0;
}
int dist(int x1,int y1,int x2,int y2)
{
    int b[100000]={0};
    int i,j;
    int s=0;
    for(i=x1-1;i<x2;i++)
        for(j=y1-1;j<y2;j++)
        {
            if((b[a[i][j]])==0)
                {
                    b[a[i][j]]=1;
                    s=s+1;
                }
        }


    return s;
}
