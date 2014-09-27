#include<stdio.h>
#include<math.h>
int pr(int);
main()
{
    int i,k,m;
    scanf("%d",&k);
    printf("%d",pr(k));
    return 0;
}
int pr(int g)
{
    if(g<1)
        return 0;
    else if(g==2)
        return 1;



    int m,i,d;
    d=0;
    m=sqrt(g)+1;
    for(i=2;i<m;i++)
        if(g%i==0)
    {
        d=1;
        break;
    }
    if(d==0)
        return 1;
    else
        return 0;
}
