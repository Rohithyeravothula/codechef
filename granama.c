#include<stdio.h>
main()
{
    int t,k,d1,d2;
    scanf("%d",&t);
    char r[1011],s[1011];
    int a[300]={0};//table for r
    int b[300]={0};//table for s
    int c[300]={0};// freq table for r
    int d[300]={0};// freq table for r
    int i,j;
    while(t--)
    {
        scanf("%s %s",r,s);
        for(i=0;i<strlen(r);i++)
        {
            k=(int)r[i];
            //printf("%d\n",k);
            a[k]=1;
            c[k]=c[k]+1;
        }
        for(i=0;i<strlen(s);i++)
        {
            k=(int)s[i];
            b[k]=1;
            d[k]=d[k]+1;
        }
        d1=0;
        /*for(i=0;i<300;i++)
            if(a[i]!=0)
            printf("%d",i);*/
        for(i=0;i<300;i++)
            if(a[i]!=b[i])
            {//printf(" %d %d %d\n",i,a[i],b[i]);
            d1=1;
            break;
            }
        d2=0;
        for(i=0;i<300;i++)
            if(c[i]!=d[i])
            {d2=1;
            break;
            }
        //printf("%d %d\n",d1,d2);
        if(d1==d2)
            printf("YES\n");
        else
            printf("NO\n");
        for(i=0;i<300;i++)
        {
            a[i]=0;
            b[i]=0;
            c[i]=0;
            d[i]=0;
        }
    }
    return 0;
}
