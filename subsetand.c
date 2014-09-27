#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int z,n,i;
        scanf("%d %d",&z,&n);
        int a[n],b[n];
        for(i=0;i<n;i++)
        {scanf("%d",&a[i]);
        b[i]=a[i]&z;}
        for(i=0;i<n;i++)
        if(b[i]==0)
        break;
        if(i<n)
        printf("Yes\n");
        else
        printf("No\n");
    }
    return 0;
}
