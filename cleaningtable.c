#include<stdio.h>
#define M 500
main()
{
    int i,t,f;
    scanf("%d",&t);
    while(t--)
    {
        int n,m,c,k;
        scanf("%d %d",&n,&m);
        int a[m];
        for(i=0;i<m;i++)
            scanf("%d",&a[i]);
        int z[M];
        for(i=0;i<M;i++)
            z[i]=500;
        for(i=0;i<m;i++)
            z[a[i]]++;
        c=0;
        int b[n];  // tables details
        for(i=0;i<n;i++)
            b[i]=-1;
        int j=0;
        for(i=0;i<m;i++)
        {
            f=0;
            for(k=0;k<n;k++)
                if(a[i]==b[k])
            {
                f=1;
                break;
            }
            printf("not found\n");
            if(f==0)
            {
                //printf("jvalue %d\n",j);
                if(j<n)
                {
                    printf("empty\n");
                    b[j]=a[i];
                    j++;
                }
                else
                {
                    printf("Else\n");
                    int min,min_i;
                    min=b[0];
                    min_i=0;
                    for(k=0;k<j;k++)
                    {
                        if(min>z[b[k]])
                            {min=z[b[k]];
                            min_i=k;}
                    }
                    printf("min %d min_i %d\n",min,min_i);
                    for(k=0;k<n;k++)
                        if(b[i]==a[min_i])
                    {
                        printf("replace\n");
                        b[j]=a[i];
                        break;
                    }
                }
                z[a[i]]--;
            }
            for(k=0;k<n;k++)
                printf("%d ",b[i]);
            printf("\n");
        }

    }
    return 0;
}
