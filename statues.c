#include<stdio.h>
main()
{
    int j=1;
    int n;
    scanf("%d",&n);
    while(n)
    {
    int a[n];
    int i;
    int s=0;
    for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            s=s+a[i];
        }
    s=s/n;
    int p=0;
    for(i=0;i<n;i++)
        if(a[i]>s)
        p=p+(a[i]-s);
    printf("Set #%d\n",j);
		printf("The minimum number of moves is %d.\n",p);
		printf("\n");
		scanf("%d",&n);
    j=j+1;
    }
    return 0;
}
