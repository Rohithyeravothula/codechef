#include<stdio.h>
main()
{
    int n,i,m,d,p;
    char c;
    scanf("%d %d",&n,&m);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    long long int sc,sa,s;
    sc=0;
    sa=0;
    for(i=0;i<m;i++)
    {
        scanf(" %c %d",&c,&d);
        if(c=='C')
            sc=(sc+d)%n;
        else if(c=='A')
            sa=(sa+d)%n;
        else if(c=='R')
        {
            s=(sa-sc);
            while(s<0)
            s=n+s;
            s=s%n;
            p=(d-s)%n;
            p=(p-1)%n;
            printf("%d\n",a[p]);
        }
    }
    return 0;
}
