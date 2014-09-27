#include<stdio.h>
main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    for(i=0;i<n;i++)
        a[i]=1;
    int s=1000;
    int j=2;
    while(j<n)
    {
        i=j;
        while((i-1)<n)
        {a[i-1]=0;
        i=i+j;}
        s=0;
        for(i=0;i<n;i++)
            s=s+a[i];
        j=j+1;
        for(i=0;i<n;i++)
        printf("%d",a[i]);
        printf("\n");
    }
    for(i=0;i<n;i++)
        if(a[i]!=0)
        break;
    printf("%d\n",i+1);
    return 0;
}
