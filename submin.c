#include<stdio.h>
#include<math.h>
main()
{
    int n;
    scanf("%d",&n);
    int i;
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int q,p,j;
    scanf("%d",&q);
    for(i=0;i<q;i++)
    {
        long long int s=0;
        int m[50]={0};
        scanf("%d",&p);
        int u=0;
        for(j=0;j<n;j++)
            if(p==a[j])
        {
            u=1;
            int k,c1,c2;
            c1=0;
            for(k=j+1;k<n;k++)
                {if((a[k]>=a[j]) && (m[k]==0))
                {c1=c1+1;
                m[k]=1;}
                else
                    break;}
            c2=0;
            for(k=j-1;k>=0;k--)
                {if((a[k]>a[j]) && (m[j]==0))
                {c2=c2+1;
                m[j]=1;}
                else
                    break;}
            s=s+(((c1+1)*c2)+c1+1);
        }
        if(u==0)
            printf("0\n");
        else
            printf("%lld\n",s);
    }
    return 0;
}
