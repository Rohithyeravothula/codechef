#include<stdio.h>
main()
{
    int n,i,j,k,r;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    int s=0;
    for(i=0;i<n;i++)
    {
        int d=0;
        for(j=0;j<i;j++)
        {
            for(k=0;k<i;k++)
            {
                for(r=0;r<i;r++)
                {
                    if(a[i]==a[j]+a[k]+a[r])
                    {
                        s++;
                        d=1;
                        break;

                    }
                }
                if(d==1)
                break;
            }
            if(d==1)
            break;
        }

    }
    printf("%d\n",s);
    return 0;
}
