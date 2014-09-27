#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int r,c,m,w;
        scanf("%d %d %d %d",&r,&w,&m,&c);
        int fc,fm,fw;
        int x;
        x=(c/4)+1;
        if(x>m)
            {fc=m*4;
            fm=m;}
        else
            {fc=c;
            fm=x;}
        x=(w/2)+1;
        if(x>w)
            {fw=w*2;
            fm=fm+w;}
        else
            {fw=x;
            fm=fm+x;}
        printf("%d %d %d\n",fm,fw,fc);
    }
    return 0;
}
