#include<stdio.h>
#include<math.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a;
        scanf("%d",&a);
        int b=a;
        int i;
        int j;
        int m=0;
        if(a%2==1)
            a=a-1;
        a=a/2;
        a=(int)sqrt(a)-2;
        for(i=a;i<b;i++)
            for(j=a;j<b;j++)
            if((2*i+2*j==b) && (m<i*j))
                m=i*j;
        printf("%d\n",m);
    }
    return 0;
}
