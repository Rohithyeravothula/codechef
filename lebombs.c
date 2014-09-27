#include<stdio.h>
main()
{
    int t;
    scanf("%d",&t);
    while(t)
    {
        t=t-1;
        char a[1005];
        int n,i;
        scanf("%d",&n);
        scanf("%s",a);
        for(i=1;i<n;i++)
        {
            if((a[i]=='1') && (a[i-1]=='0'))
                a[i-1]='2';
            if((a[i]=='0') && (a[i-1]=='1'))
                {
                    a[i]='2';
                    a[i-1]='2';
                }
        }
        int s=0;
        for(i=0;i<n;i++)
            if(a[i]=='0')
            s=s+1;
        printf("%d\n",s);

    }
    return 0;
}
