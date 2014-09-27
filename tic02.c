#include<stdio.h>
main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {int a[n];
    int i;
    long long int s=0;
    for(i=0;i<n;i++)
        {scanf("%d",&a[i]);
        s=s+a[i];}
    for(i=n-1;i>=0;i--)
    printf("%d ",a[i]);
    printf("\n%d\n",s);
    }
    return 0;
}
