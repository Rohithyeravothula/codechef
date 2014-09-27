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
        int d=0;
        long long int x,y;
        x=fastio();
        y=fastio();
        if((x>=0 && x%2==1) || (x<=0 && x%2==0))
        {
            if(y%2==0)
                {printf("YES\n");
                d=1;}
            else if(x>0)
            {
                if(y>=(1-x) && y<=x+1)
                    {printf("YES\n");
                    d=1;}
            }
            else if(x<0)
            {
                if(y<=-x && y>=x)
                    {printf("YES\n");
                    d=1;}
            }
        }
        if(y%2==0 && d==0)
        {
            if(y>0 && (x<=y-1 && x>=-y))
            {printf("YES\n");
            d=1;}
            if(y<0 && (x>=y && x<=1-y))
            {
                printf("YES\n");
                d=1;
            }
        }
        if(d==0)
            printf("NO\n");
    }
    return 0;
}
