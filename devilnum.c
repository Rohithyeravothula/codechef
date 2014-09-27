#include<stdio.h>
#include<math.h>
#include<string.h>
int ch(int n)
{
    int m,p;
    m=n;
    while(m)
    {
        p=m%10;
        if(p!=1 && p!=3)
            return 0;
        m=m/10;
    }
    return 1;
}
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        while(ch(n)!=1)
            n--;
        printf("%d\n",n);
    }
    return 0;
}

