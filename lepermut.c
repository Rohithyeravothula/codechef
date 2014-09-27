#include<stdio.h>
main()
{
    int t,n,s,p,i,j;
    scanf("%d",&t);
    while(t)
    {
        t=t-1;
        int a[109]={0};
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        s=0;

        for(i=0;i<n-1;i++)
            if(a[i]>a[i+1])
            s=s+1;
        /*if(a[0]>a[1])
            s=s+1;*/
        p=0;
        for(i=0;i<n;i++)
        for(j=i;j<n;j++)
        if(a[i]>a[j])
        p=p+1;
        //printf("%d %d\n",p,s);
        if(p==s)
            printf("YES\n");
        else
            printf("NO\n");


    }
}
