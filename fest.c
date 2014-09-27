#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[100050],b[100050];
        long long int n,m;
        scanf("%s %s",a,b);
        char u[12],v[12];
        int la=strlen(a);
        int lb=strlen(b);
        strncpy(u,a+la-10,10);
        strncpy(v,b+lb-10,10);
        n=atoll(u);
        m=atoll(v);

    }
    return 0;
}
