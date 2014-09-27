#include<stdio.h>
main()
{
    int n,k;
    char a[200];
    scanf("%d %d",&n,&k);
    scanf("%s",a);
    int i=0;
    if(2*k<=n)
    {

        for(i=k;i>1;i--)
            printf("LEFT\n");
        for(i=0;i<n-1;i++)
        {
            printf("PRINT %c\n",a[i]);
            printf("RIGHT\n");
        }
        printf("PRINT %c\n",a[i]);
    }
    else
    {
        for(i=k;i<n;i++)
            printf("RIGHT\n");
        for(i=0;i<n-1;i++)
        {
            printf("PRINT %c\n",a[n-1-i]);
            printf("LEFT\n");
        }
        printf("PRINT %c\n",a[0]);

    }
    return 0;

}
