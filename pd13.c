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
        int i,k;
        k=sqrt(n)+1;
        int s=0;
        for(i=1;i<k;i++)
            if(n%i==0)
            s=s+i+(n/i);
        k=sqrt(n);
        if(k*k==n)
            s=s-k;
        s=s-n;
        printf("%d\n",s);
    }
    return 0;
}
