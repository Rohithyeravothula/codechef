#include<stdio.h>
#include<limits.h>
main()
{
    int n,k,j,i,l,r,c;
    scanf("%d %d",&n,&k);
    long long int a[n],d,max_d;
    for(i=0;i<n;i++)
    scanf("%lld",&a[i]);
    max_d=LLONG_MIN;
    int start=0;
    for(r=0;r<=k;r++)
    {
        int p=2*r;
        if(p>=n)
            p=n-1;
        //printf("%d\n",p);
        for(j=1;j<=p;j++)
        {

            for(i=0;i<j;i++)
            {
                d=(a[j]-a[i])/(j-i);
                c=0;
                for(l=0;l<n;l++)
                {
                    if((a[i]+(l-i)*d)!=a[l])
                    {
                        c++;
                        //printf("Unequal at %d %d\n",a[l],a[i]+(l-i)*d);
                    }
                    if(c>r)
                        break;\
                }
                //printf("%d %d %d\n",d,c,r);
                if(max_d<=d)
                {
                    max_d=d;
                    start=i;
                }
            }
        }
    }
    for(i=0;i<n;i++)
        a[i]=a[start]+(i-start)*max_d;
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}
