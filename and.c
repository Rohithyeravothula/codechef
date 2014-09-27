#include<stdio.h>
main()
{
    int n,i,j,s=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    int c=0;
    for(i=0;i<n;i++)
        if(a[i]==1)
        c++;
    for(i=0;i<n;i++)
        if(a[i]==1)
            {c--;
            s=s+c;}
    printf("%d\n",s);

    return 0;
}
