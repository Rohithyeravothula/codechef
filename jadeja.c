#include<stdio.h>
#include<math.h>
long int gcd(long int a,long int b)
{
    if(a==0)
        return b;
    else
        return gcd(b%a,a);
}
long int ch(long int a,long int b)
{
    if(a>=b)
        return a-b;
    else
        return b-a;;
}

main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int x1,x2,y1,y2,p1,p2,s;
        scanf("%ld %ld %ld %ld",&x1,&y1,&x2,&y2);
        p1=ch(x1,x2);
        p2=ch(y1,y2);
        s=gcd(p1,p2);
        s--;
        printf("%ld\n",s);
    }
    return 0;
}
