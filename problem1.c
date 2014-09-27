#include<stdio.h>
main()
{

    int a,b;
    scanf("%d %d",&a,&b);
    int s=a;
    int r=0;
    while(a>b)
    {
        r=a%b;
        s=s+(a/b);
        a=(a/b)+r;
    }
    printf("%d\n",s);
    if(a==b)
    {
        s++;
        r++;
    }

    printf("%d\n",s);
return 0;
}
