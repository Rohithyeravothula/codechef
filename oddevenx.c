#include<stdio.h>
#include<math.h>
main()
{
    int t;
    int n;
    int so,se;
    scanf("%d",&t);
    so=0;
    se=0;
    while(t--)
    {
        scanf("%d",&n);
        if(n%2==0)
            se=se+1;
        else
            so=so+1;
    }
    printf("%d\n",abs(so-se));
    return 0;
}
