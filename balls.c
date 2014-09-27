#include<stdio.h>
main()
{
        int t[100010]={0};
        int b[100010]={0};
        int n,tn,bn;
        scanf("%d",&n);
        int i;
        for(i=0;i<n;i++)
            {scanf("%d %d",&tn,&bn);
            t[tn]++;
            b[bn]++;}
        int m=100050;
        for(i=0;i<100010;i++)
            if(t[i]+b[i]>=(n/2))
                if(m>b[i])
                m=b[i];
        if(i==10010)
            printf("Impossible\n");
        else
            printf("%lld\n",m);


    return 0;
}
