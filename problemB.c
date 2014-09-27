#include<stdio.h>
main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int d=1;
    if(a[0]!=0)
        printf("P");
    else
        printf("L");

    while(d)
    {

        for(i=1;i<n-1;i++)
           {
            if(a[i]>0)
            {
                printf("PR");
                a[i]--;

            }
            else
                printf("R");
           }

        for(i=n;i>1;i--)
           {
            if(a[i]>0)
            {
                printf("PL");
                a[i]--;

            }
            else
                printf("L");

           }
        int s;
        for(i=0;i<n;i++)
            s=s+a[i];
        if(a[i]==0)
            d=0;

    }
return 0;
}
