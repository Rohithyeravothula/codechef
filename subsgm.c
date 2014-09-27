#include<stdio.h>
main()
{
    int i,n,m,c,p;
    scanf("%d %d",&n,&m);
    int a[n],b[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    while(m--)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        a[x]=y;
        b[i]=0;
        c=0;
        p=0;
        for(i=0;i<n;i++)
        {
            if(b[i]==1)
            c=c+1;
            else
            c=0;
            if(p<c)
            p=c;
        }
        printf("%d\n",p+1);
    }
    return 0;
}
