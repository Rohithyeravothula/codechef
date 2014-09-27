#include<stdio.h>
inline int fastio()
{
     int t=0;
     char ch;
     ch=getchar_unlocked();
     while(ch<'0'||ch>'9')
     ch=getchar_unlocked();
     while(ch<='9'&& ch>='0')
     {
                     t=(t<<3)+(t<<1)+ch-'0';
                     ch=getchar_unlocked();
     }
     return t;
}

main()
{
    int t;
    t=fastio();
    while(t--)
    {
        int n,i;
        n=fastio();
        int a[n];
        for(i=0;i<n;i++)
            a[i]=fastio();
        int y=0;
        for(i=0;i<n-1;i++)
            if(a[i]<a[i+1])
            {
                y=1;
                break;
            }
        if (y==0)
            printf("UNFIT\n");
        else
        {
            int min=a[0],d=0,p=0;
            for(i=1;i<n;i++)
            {
                if(a[i]<min)
                {min=a[i];
                p=0;}
                else
                    p=a[i]-min;
                if(p>d)
                    d=p;
            }
            printf("%d\n",d);
        }
    }
    return 0;
}
