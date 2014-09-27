#include<stdio.h>
int max(int a,int b)
{if(a<b)
    return b;
else
    return a;}
main()
{
    int l,m,n;
    scanf("%d %d %d",&l,&m,&n);
    if((n-m) > (m-l))
        printf("%d\n",n-m-1);
    else
        printf("%d\n",m-l-1);
    return 0;
}
