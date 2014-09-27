#include<stdio.h>
#include<string.h>
main()
{
    int n,q,i;
    scanf("%d %d",&n,&q);
    int r[n];
    int c[n];
    for(i=0;i<n;i++)
    {
        r[i]=0;
        c[i]=0;
    }
    while(q--)
    {
        char z[10];
        int u,v;
        scanf("%s %d %d",z,&u,&v);
        if(strcmp(z,"RowAdd")==0)
            r[u-1]=r[u-1]+v;
        else
            c[u-1]=c[u-1]+v;
    }
    int mr,mc;
    mr=r[0];
    mc=c[0];

    for(i=0;i<n;i++)
    {
        if(mr<r[i])
            mr=r[i];
        if(mc<c[i])
            mc=c[i];
    }
    printf("%d\n",mr+mc);
    return 0;
}
