#include<stdio.h>
#include<math.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int k;
        if(n%2==0)
            k=(n/2-1)*(n/2+1)/2;
        else
            {
                n--;
                k=(n/2-1)*(n/2+1)/2;
            }
        printf("%d\n",k);
    }
    return 0;
}
