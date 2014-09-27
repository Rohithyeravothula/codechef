#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    int a[t],i;
    for(i=0;i<t;i++)
    scanf("%d",&a[i]);
    int s=0;
    for(i=t-1;i>0;i--)
    s=s+a[i]-a[i-1];
    s=s+a[0];
    printf("%d\n",s);
    return 0;
}
