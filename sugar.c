#include<stdio.h>
main()
{
    int n,s,i,j,k;
    scanf("%d %d",&n,&s);
    k=0;
    int d=0;
    for(i=0;i<n;i++)
    {
        int x,y;
        float z;
        scanf("%d %d",&x,&y);
        z=x+(y/(100.0));
        if(z<s)
        {
            d=1;
            y=100-y;
            if(y>k && y!=100)
            k=y;
        }
    }
    if(d==0)
    printf("-1\n");
    else
    printf("%d\n",k);
    return 0;
}
