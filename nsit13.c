#include<stdio.h>
main()
{
    int t=10;
    while(t--)
    {
        int a[10]={0};
        int i,j,k,d,s;
        int p[42]={0};
        for(i=0;i<10;i++)
            scanf("%d",&a[i]);
        for(i=0;i<10;i++)
            p[a[i]%42]=1;
        s=0;
        for(i=0;i<42;i++)
            if(p[i]!=0)
            s++;
        printf("%d\n",s);
    }
    return 0;
}
