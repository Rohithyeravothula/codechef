#include<stdio.h>
#include<math.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,d,p;
        scanf("%d %d",&n,&d);
        int m[12]={0};
        int i=0;
        if(n==0)
        {printf("0\n");
        continue;
        }
        else
        {
        while(n)
        {
           p=n%d;
           m[i]=p;
           n=n/d;
           i=i+1;
        }
        int j;
        for(j=i-1;j>=0;j--)
            printf("%d",m[j]);
        printf("\n");
        }
    }
    return 0;
}
