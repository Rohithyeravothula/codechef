#include<stdio.h>
main()
{
    int n;
    scanf("%d",&n);
    while(n!=0)
    {
        int i;
        int l[n];
        for(i=0;i<n;i++)
            scanf("%d",&l[i]);
        int j,k,v,s=0;
        for(j=0;j<n;j++)
            for(k=j+1;k<n;k++)
                for(v=k+1;v<n;v++)
                    if((l[j]+l[k]>=l[v]) || (l[v]+l[k]>=l[j]) || (l[j]+l[v]>=l[k]))
                        s=s+1;
        printf("%d",s);

    }
}
