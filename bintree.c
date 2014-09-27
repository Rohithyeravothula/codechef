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
        long long int i,j;
        i=fastio();
        j=fastio();
        int c1=0;
        int c2=0;
        while(i!=j)
        {
            if(i<j)
            {
                j=j/2;
                c2++;
            }
            else
                {i=i/2;
                c1++;}
        }
        int c=c1+c2;
        printf("%d\n",c);
    }
    return 0;
}
