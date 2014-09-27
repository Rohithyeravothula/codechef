#include<stdio.h>
main()
{

    int t,i,j,n,x,s,m,r,p,d;

    int a[105]={0};
    scanf("%d",&t);
          while(t--)
          {
              for(i=0;i<105;i++)
                a[i]=0;
             scanf("%d %d",&n,&x);
             s=0;
             m=0;
             for(i=0;i<n;i++)
             {scanf("%d",&a[i]);
             s=s+a[i];
             if(m>a[i])
                m=a[i];
             }
             r=s/x;
             p=s-r*x;
             printf("%d\n",m);
             d=0;
             if(p>=m)
             printf("-1\n");
             else
                printf("%d\n",r);
          }
          return 0;
}
